
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
    TreeNode *prev = NULL;
    void flatten(TreeNode *root)
    {
        if (root == NULL)
            return;
        flatten(root->right);
        flatten(root->left);
        root->right = prev;
        root->left = NULL;
        prev = root;
    }
};