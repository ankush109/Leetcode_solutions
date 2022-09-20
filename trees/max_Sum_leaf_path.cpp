class Solution
{
public:
    int maxPathSum(Node *root)
    {

        if (root == NULL)
            return INT_MIN;
        if (root->left == NULL && root->right == NULL)
        {
            return root->data;
        }
        int lf = maxPathSum(root->left);
        int rf = maxPathSum(root->right);

        return root->data + max(lf, rf);
    }
};