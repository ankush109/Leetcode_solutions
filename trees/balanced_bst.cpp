
class Solution
{
    vector<TreeNode *> ans;

public:
    void inorder(TreeNode *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        ans.push_back(root);
        inorder(root->right);
    }
    TreeNode *isb(int low, int high)
    {
        if (low > high)
            return NULL;

        int m = (high + low) / 2;
        ans[m]->left = isb(low, m - 1);
        ans[m]->right = isb(m + 1, high);
        return ans[m];
    }

    TreeNode *balanceBST(TreeNode *root)
    {

        inorder(root);
        int l = 0;
        int h = ans.size() - 1;
        return isb(l, h);
    }
};