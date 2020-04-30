int subarraySum(vector<int> &a, int sum)
{

    unordered_map<int, int> m;
    int pre = 0, count = 0;

    for (auto i : a)
    {
        pre += i;

        if (pre == sum)
            count++;

        if (m.find(pre - sum) != m.end())
            count += (m[pre - sum]);

        m[pre]++;
    }

    return count;
}