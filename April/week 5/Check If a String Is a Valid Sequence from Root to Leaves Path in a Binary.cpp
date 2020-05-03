/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
int end;
bool isleaf(TreeNode *root)
{
    if (root->left == NULL and root->right == NULL)
        return true;
    else
        return false;
}

bool dfs(TreeNode *root, vector<int> &ar, int pos)
{

    if (root == NULL)
        return false;

    if (pos == end)
    {
        if (isleaf(root) and root->val == ar[pos])
            return true;
        else
            return false;
    }

    if (root->val != ar[pos])
        return false;

    return dfs(root->left, ar, pos + 1) | dfs(root->right, ar, pos + 1);
}

bool isValidSequence(TreeNode *root, vector<int> &ar)
{
    end = ar.size() - 1;
    return dfs(root, ar, 0);
}