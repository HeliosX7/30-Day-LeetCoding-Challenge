/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode *bstFromPreorder(vector<int> &preorder)
{

    TreeNode *root = NULL;

    for (int i = 0; i < preorder.size(); i++)
    {
        root = makeTree(root, preorder[i]);
    }

    return root;
}

TreeNode *makeTree(TreeNode *root, int val)
{

    if (root == NULL)
    {
        root = new TreeNode(val);
    }
    else if (val < root->val)
    {
        root->left = makeTree(root->left, val);
    }
    else if (val > root->val)
    {
        root->right = makeTree(root->right, val);
    }

    return root;
}