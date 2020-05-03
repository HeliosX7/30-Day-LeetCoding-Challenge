int maximalSquare(vector<vector<char>> &a)
{
    if (a.empty())
        return 0;

    int r = a.size(), c = a[0].size();
    int dp[r + 1][c + 1];
    memset(dp, 0, sizeof dp);

    int ans = 0;
    for (int i = 1; i <= r; ++i)
        for (int j = 1; j <= c; ++j)
        {
            if (a[i - 1][j - 1] == '0')
                dp[i][j] = 0;
            else
            {
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                if (dp[i][j] > ans)
                    ans = dp[i][j];
            }
        }
    return ans * ans;
}