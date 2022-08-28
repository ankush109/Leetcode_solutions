#include <vector>
#include <iostream>
#include <queue>
#include <stack>
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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<int> preorder;
        if (root == NULL)
        {
            // return preorder;
        }
        stack<TreeNode *> st;
        while (!st.empty())
        {
            root = st.top();
            st.pop();
            preorder.push_back(root->val);
            if (root->right != NULL)
            {
                st.push(root->right);
            }
            if (root->left != NULL)
            {
                st.push(root->left);
            }
        }
        // return preorder;
    }
};