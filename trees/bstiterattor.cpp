#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

//  * Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class BSTIterator
{
private:
    stack<TreeNode *> s;

public:
    BSTIterator(TreeNode *root)
    {
        push(root);
    }

    int next()
    {
        TreeNode *temp = s.top();
        s.pop();
        push(temp->right);
        return temp->val;
    }

    bool hasNext()
    {
        return !s.empty();
    }

private:
    void push(TreeNode *node)
    {
        while (node != NULL)
        {
            s.push(node);
            node = node->left;
        }
    }
};