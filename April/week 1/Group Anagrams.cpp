vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> m;
    vector<vector<string>> v;
    for (auto s : strs)
    {
        string ss = s;
        sort(ss.begin(), ss.end());
        m[ss].push_back(s);
    }

    for (auto i : m)
        v.push_back(i.second);
    return v;
}