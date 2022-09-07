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
    TreeNode *findlast(TreeNode *root)
    {

        if (root->right == NULL)
        {
            return root;
        }
        return findlast(root->right);
    }

    TreeNode *helper(TreeNode *root)
    {
        if (root->left == NULL)
        {
            return root->right;
        }
        else if (root->right == NULL)
        {
            return root->left;
        }
        TreeNode *r = root->right;
        TreeNode *lr = findlast(root->left);
        lr->right = r;
        return root->left;
    }

    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (root == NULL)
            return NULL;
        if (root->val == key)
            return helper(root);
        TreeNode *d = root;
        while (root != NULL)
        {
            if (root->val > key)
            {
                if (root->left != NULL && root->left->val == key)
                {
                    root->left = helper(root->left);
                    break;
                }
                else
                {
                    root = root->left;
                }
            }
            else
            {
                if (root->right != NULL && root->right->val == key)
                {
                    root->right = helper(root->right);
                    break;
                }
                else
                {
                    root = root->right;
                }
            }
        }
        return d;
    }
};