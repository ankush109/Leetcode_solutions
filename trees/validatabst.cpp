#include <bits/stdc++.h>

//  * Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
class Solution
{
public:
    bool isValidBST(TreeNode *root)
    {
        if (root == NULL)
            return false;
        return isval(root, LONG_MIN, LONG_MAX);
    }
    bool isval(TreeNode *root, long min, long max)
    {
        if (root == NULL)
            return true;
        if (root->val >= max || root->val <= min)
            return false;
        return isval(root->left, min, root->val) && isval(root->right, root->val, max);
    }
};