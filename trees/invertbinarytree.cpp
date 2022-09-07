
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
    TreeNode *invertTree(TreeNode *root)
    {
        TreeNode *t;
        if (root == NULL)
            return NULL;
        invertTree(root->left);
        invertTree(root->right);
        if (root != NULL)
        {
            t = root->left;
            root->left = root->right;
            root->right = t;
        }
        return root;
    }
};