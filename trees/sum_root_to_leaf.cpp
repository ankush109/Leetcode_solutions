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
    void find(TreeNode *root, int &ans, int s)
    {
        if (root == NULL)
            return;
        s = s * 10 + root->val;
        if (root->left == NULL && root->right == NULL)
        {
            ans += s;
            return;
        }
        find(root->left, ans, s);
        find(root->right, ans, s);
    }
    int sumNumbers(TreeNode *root)
    {
        int ans = 0;
        int sum = 0;

        find(root, ans, 0);
        return ans;
    }
};