int findMaxLength(vector<int> &arr)
{
    unordered_map<int, int> map;
    map[0] = -1;

    int len = 0, n = arr.size(), sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += (arr[i] == 0) ? -1 : 1;

        if (map.find(sum) != map.end())
        {
            if (len < i - map[sum])
                len = i - map[sum];
        }
        else
            map[sum] = i;
    }

    return len;
}
