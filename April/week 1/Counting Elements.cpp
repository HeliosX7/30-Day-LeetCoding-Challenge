int a[1001] = {0};
int countElements(vector<int> &arr)
{
    int count = 0;
    for (auto i : arr)
        a[i]++;
    for (int i = 0; i < 1000; ++i)
        if (a[i] > 0 and a[i + 1] > 0)
            count += a[i];
    return count;
}