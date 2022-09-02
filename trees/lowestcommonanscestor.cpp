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
// the first approach is brute force approach

// class Solution
// {
// public:
//     TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
//     {
//         vector<TreeNode *> ans1;
//         vector<TreeNode *> ans2;
//         if (root == NULL)
//             return NULL;
//         check1(root, p, ans1);
//         check2(root, q, ans2);
//         int i;
//         for (i = 0; i < ans1.size() && i < ans2.size(); i++)
//         {
//             if (ans1[i] != ans2[i])
//                 break;
//         }

//         return ans1[i - 1];
//     }
//     bool check1(TreeNode *root, TreeNode *p, vector<TreeNode *> &ans1)
//     {
//         if (root == NULL)
//             return false;
//         ans1.push_back(root);
//         if (root->val == p->val)
//             return true;
//         if (check1(root->left, p, ans1) || check1(root->right, p, ans1))
//             return true;

//         ans1.pop_back();
//         return false;
//     }
//     bool check2(TreeNode *root, TreeNode *q, vector<TreeNode *> &ans2)
//     {
//         if (root == NULL)
//             return false;
//         ans2.push_back(root);
//         if (root->val == q->val)
//             return true;
//         if (check1(root->left, q, ans2) || check1(root->right, q, ans2))
//             return true;

//         ans2.pop_back();
//         return false;
//     }
// };

// more optimised solution using recursion:-

class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == NULL || root == p || root == q)
            return root;

        TreeNode *left = lowestCommonAncestor(root->left, p, q);
        TreeNode *right = lowestCommonAncestor(root->right, p, q);
        if (left == NULL)
            return right;
        else if (right == NULL)
            return left;
        else
        {
            return root;
        }
    }
};