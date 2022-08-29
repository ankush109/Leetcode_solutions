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
    bool isBalanced(TreeNode *root)
    {
        return isheight(root) != -1;
    }
    int isheight(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int lh = isheight(root->left);
        if (lh == -1)
            return -1;
        int rh = isheight(root->right);
        if (rh == -1)
            return -1;
        if (abs(lh - rh) > 1) // difference b/w left height and right height
            return -1;
        return max(rh, lh) + 1;
    }
};