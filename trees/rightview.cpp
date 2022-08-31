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
    void f(TreeNode *node, int level, vector<int> &a)
    {
        if (node == NULL)
            return;
        if (level == a.size())
            a.push_back(node->val);
        f(node->right, level + 1, a);
        f(node->left, level + 1, a);
    }
    vector<int> rightSideView(TreeNode *root)
    {
        int level = 0;
        vector<int> a;
        if (root == NULL)
            return a;

        f(root, level, a);
        return a;
    }
};