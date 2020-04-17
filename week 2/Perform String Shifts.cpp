string stringShift(string s, vector<vector<int>> &shift)
{
    int d = 0;
    for (auto v : shift)
        if (v[0] == 0)
            d -= v[1];
        else
            d += v[1];

    int n = s.length();
    d %= n;
    if (d < 0)
        d += n;

    return s.substr(n - d) + s.substr(0, n - d);
}