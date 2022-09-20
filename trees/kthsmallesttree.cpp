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
    int kthSmallest(TreeNode *root, int k)
    {
        vector<int> ans;
        in(root, k, ans);
        return ans[k - 1]; //  1 2 3 5 6 
    }
    void in(TreeNode *root, int k, vector<int> &ans)
    {
        if (root == NULL)
            return;
        in(root->left, k, ans);
        ans.push_back(root->val);
        in(root->right, k, ans);
    }
};