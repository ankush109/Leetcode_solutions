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
// class Solution
// {
//     bool sum(vector<TreeNode *> &in, int k, int i, int j)
//     {
//         if (i == j)
//             return false;
//         if (in[i]->val + in[j]->val == k)
//             return true;
//         if (in[i]->val + in[j]->val < k)
//             return sum(in, k, i + 1, j);
//         else if (in[i]->val + in[j]->val > k)
//             return sum(in, k, i, j - 1);
//         return true;
//     }
//     void inorder(TreeNode *root, vector<TreeNode *> &in)
//     {
//         if (root == NULL)
//             return;
//         inorder(root->left, in);
//         in.push_back(root);
//         inorder(root->right, in);
//     }

// public:
//     bool findTarget(TreeNode *root, int k)
//     {
//         vector<TreeNode *> in;
//         inorder(root, in);
//         return sum(in, k, 0, in.size() - 1);
//     }
// };

// optimised approach using the concept of bst - iterator

class bstiterator
{
private:
    stack<TreeNode *> s;
    bool reverse = true;

public:
    bstiterator(TreeNode *root, bool isreverse)
    {
        reverse = isreverse;
        pushall(root);
    }
    int next()
    {
        TreeNode *temp = s.top();
        s.pop();
        if (!reverse)
            pushall(temp->right);
        else
        {
            pushall(temp->left);
        }
        return temp->val;
    }
    bool hasnext()
    {

        return !s.empty();
    }

public:
    void pushall(TreeNode *root)
    {
        while (root)
        {
            s.push(root);
            if (reverse == true)
            {
                root = root->right;
            }
            else
            {
                root = root->left;
            }
        }
    }
};
class Solution
{
public:
    bool findTarget(TreeNode *root, int k)
    {

        if (!root)
            return false;
        bstiterator l(root, false);
        bstiterator r(root, true);
        int i = l.next();
        int j = r.next();
        while (i < j)
        {
            if (i + j == k)
                return true;
            else if (i + j < k)
                i = l.next();
            else
                j = r.next();
        }
        return false;
    }
};