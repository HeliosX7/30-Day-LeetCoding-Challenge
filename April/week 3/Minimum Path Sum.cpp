int minPathSum(vector<vector<int>> &g)
{
    int r = g.size(), c = g[0].size();

    for (int i = 1; i < r; ++i)
        g[i][0] += g[i - 1][0];
    for (int j = 1; j < c; ++j)
        g[0][j] += g[0][j - 1];

    for (int i = 1; i < r; ++i)
        for (int j = 1; j < c; ++j)
            g[i][j] += min(g[i][j - 1], g[i - 1][j]);

    return g[r - 1][c - 1];
}