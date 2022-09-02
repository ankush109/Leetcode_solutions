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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        queue<TreeNode *> q;
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        bool c = true;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();

            vector<int> level(n);
            for (int i = 0; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                int index;

                if (c == false)
                {
                    index = n - 1 - i;
                }
                else
                {
                    index = i;
                }
                level[index] = node->val;
                if (node->left != NULL)
                {
                    q.push(node->left);
                }
                if (node->right != NULL)
                {
                    q.push(node->right);
                }
            }
            // after this level;
            c = !c;
            ans.push_back(level);
        }
        return ans;
    }
};