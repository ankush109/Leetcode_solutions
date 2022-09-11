class Solution
{
private:
    TreeNode *f;
    TreeNode *p;
    TreeNode *m;
    TreeNode *l;

private:
    void inorder(TreeNode *root)
    {
        if (root == NULL)
            return;
        inorder(root->left);
        if (root != NULL && (root->val < p->val))
        {
            if (f == NULL)
            {
                f = p;
                m = root;
            }
            else
            {
                l = root;
            }
        }
        p = root;
        inorder(root->right);
    }

public:
    void recoverTree(TreeNode *root)
    {
        f = m = l = NULL;
        p = new TreeNode(INT_MIN);
        inorder(root);
        if (f && l)
            swap(f->val, l->val);
        else if (f && m)
            swap(f->val, m->val);
    }
};