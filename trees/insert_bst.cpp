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
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        if (root == NULL)
        {
            TreeNode *root = new TreeNode;
            root->val = val;
            root->right = root->left = NULL;
            return root;
        }
        if (val > root->val)
        {
            root->right = insertIntoBST((root->right), val);
        }
        else
        {
            root->left = insertIntoBST((root->left), val);
        }
        return root;
    }
};