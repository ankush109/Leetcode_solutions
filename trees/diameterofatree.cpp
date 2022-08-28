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
    int diameterOfBinaryTree(TreeNode *root)
    {
        int d = 0;
        height(root, d);
        return d;
    }
    int height(TreeNode *root, int &d)
    {
        if (root == NULL)
        {
            return 0;
        }
        int lh = height(root->left, d);
        int rh = height(root->right, d);
        d = max(d, lh + rh);
        return 1 + max(rh, lh);
    }
};