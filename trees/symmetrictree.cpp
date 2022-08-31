#include <vector>
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
public:
    bool isSymmetric(TreeNode *root)
    {
        return root == NULL || issym(root->left, root->right);
    }
    bool issym(TreeNode *left, TreeNode *right)
    {
        if (left == NULL || right == NULL)
            return right == left;
        if (right->val != left->val)
            return false;

        return issym(left->left, right->right) && issym(left->right, right->left);
    }
};