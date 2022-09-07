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
    void find(TreeNode *node, int sum, int targetSum, vector<vector<int>> &ans, vector<int> &a)
    {

        if (node == NULL)
            return;

        sum += node->val;
        if (node->left == NULL && node->right == NULL)
        {
            if (sum == targetSum)
            {
                a.push_back(node->val);
                ans.push_back(a);
                a.pop_back();
            }
        }
        else
        {
            a.push_back(node->val);
            find(node->left, sum, targetSum, ans, a);
            find(node->right, sum, targetSum, ans, a);
            a.pop_back();
        }
    }

    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<vector<int>> ans;
        vector<int> a;
        int sum = 0;
        find(root, sum, targetSum, ans, a);
        return ans;
    }
};