int maxSubArray(vector<int> &a)
{
    int ans = INT_MIN, cur = 0;

    for (int i : a)
    {
        cur += i;
        ans = max(ans, cur);
        cur = max(0, cur);
    }
    return ans;
}