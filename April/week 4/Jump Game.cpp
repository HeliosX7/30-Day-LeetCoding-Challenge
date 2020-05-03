bool canJump(vector<int> &nums)
{
    int pos = 0, n = nums.size();

    for (int i = 0; i <= pos; ++i)
    {
        pos = max(pos, i + nums[i]);
        if (pos >= n - 1)
            return true;
    }

    return false;
}