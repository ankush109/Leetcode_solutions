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
class Solution
{
    bool sum(vector<TreeNode *> &in, int k, int i, int j)
    {
        if (i == j)
            return false;
        if (in[i]->val + in[j]->val == k)
            return true;
        if (in[i]->val + in[j]->val < k)
            return sum(in, k, i + 1, j);
        else if (in[i]->val + in[j]->val > k)
            return sum(in, k, i, j - 1);
        return true;
    }
    void inorder(TreeNode *root, vector<TreeNode *> &in)
    {
        if (root == NULL)
            return;
        inorder(root->left, in);
        in.push_back(root);
        inorder(root->right, in);
    }

public:
    bool findTarget(TreeNode *root, int k)
    {
        vector<TreeNode *> in;
        inorder(root, in);
        return sum(in, k, 0, in.size() - 1);
    }
};