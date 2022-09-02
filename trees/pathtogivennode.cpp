
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

bool isnodepath(TreeNode *A, int B, vector<int> &ans)
{

    if (A == NULL)
        return false;
    ans.push_back(A->val);
    if (A->val == B)
    {

        return true;
    }

    if (isnodepath(A->left, B, ans) || isnodepath(A->right, B, ans))
        return true;

    ans.pop_back();
    return false;
}
// vector<int> Solution : solve(TreeNode *A, int B)
// {
//     vector<int> ans;
//     isnodepath(A, B, ans);
//     return ans;
// }
