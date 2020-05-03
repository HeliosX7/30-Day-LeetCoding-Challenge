int longestCommonSubsequence(string a, string b)
{
    int r = a.size(), c = b.size();
    int dp[r + 1][c + 1];
    memset(dp, 0, sizeof dp);

    for (int i = 1; i <= r; ++i)
        for (int j = 1; j <= c; ++j)
            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else if (dp[i - 1][j] >= dp[i][j - 1])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i][j - 1];

    return dp[r][c];
}