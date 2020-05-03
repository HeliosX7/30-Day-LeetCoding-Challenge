/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#define ff first
#define ss second
//pair<diameter,height>

pair<int, int> dfs(TreeNode *root)
{
    if (root == NULL)
        return {0, 0};

    pair<int, int> left = dfs(root->left);
    pair<int, int> right = dfs(root->right);

    int diameter = max({left.ff, right.ff, left.ss + right.ss});

    return {diameter, max(left.ss, right.ss) + 1};
}

int diameterOfBinaryTree(TreeNode *root)
{
    return dfs(root).ff;
}