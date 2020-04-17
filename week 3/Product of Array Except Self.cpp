vector<int> productExceptSelf(vector<int> &a)
{
    int n = a.size();
    vector<int> v(n, 1);

    int pre = a[0];

    for (int i = 1; i <= n - 1; ++i)
    {
        v[i] = pre;
        pre *= a[i];
    }

    int post = a[n - 1];

    for (int i = n - 2; i >= 0; --i)
    {
        v[i] = v[i] * post;
        post *= a[i];
    }

    return v;
}