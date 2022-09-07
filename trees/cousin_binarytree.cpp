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
    bool check_level(TreeNode *root, int x, int y)
    {
        int c1, c2 = 0;
        if (root == NULL)
            return false;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            c1 = 0;
            c2 = 0;
            int n = q.size();
            for (int i = 0; i < n; i++)
            {

                TreeNode *node = q.front();
                q.pop();
                cout << node->val;
                if (node->right != NULL && node->left != NULL)
                {
                    if (node->right->val == x && node->left->val == y || node->right->val == y && node->left->val == x)
                    {
                        return false;
                    }
                }
                if (node->val == x)
                {
                    c1 = 1;
                }
                if (node->val == y)
                {
                    c2 = 1;
                }
                if (node->left)
                {
                    q.push(node->left);
                }
                if (node->right)
                {
                    q.push(node->right);
                }
            }
            cout << "\n";
            if (c1 == 1 && c2 == 1)
                return true;
        }
        return false;
    }
    bool isCousins(TreeNode *root, int x, int y)
    {

        return check_level(root, x, y);
    }
};