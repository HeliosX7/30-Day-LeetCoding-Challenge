int numJewelsInStones(string J, string S)
{
    int res = 0;
    unordered_map<char, int> m;
    for (auto c : S)
        m[c]++;

    for (auto c : J)
        if (m.count(c) != 0)
            res += m[c];

    return res;

}