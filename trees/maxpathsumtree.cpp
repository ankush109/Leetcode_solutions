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
    int maxPathSum(TreeNode *root)
    {
        int maxi = 0;
        ismaxpathsum(root, maxi);
        return maxi;
    }
    int ismaxpathsum(TreeNode *root, int &maxi)
    {
        if (root == NULL)
            return 0;
        int leftsum = max(0, ismaxpathsum(root->left, maxi));
        int rightsum = max(0, ismaxpathsum(root->right, maxi));
        maxi = max(maxi, leftsum + rightsum + root->val);
        return root->val + max(leftsum, rightsum);
    }
};