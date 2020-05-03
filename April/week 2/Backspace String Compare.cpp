bool backspaceCompare(string s1, string s2)
{
    int c1 = 0, c2 = 0;
    for (int i = s1.length() - 1; i >= 0; --i)
    {
        if (c1 && s1[i] != '#')
        {
            s1[i] = ' ';
            c1--;
        }
        if (s1[i] == '#')
        {
            s1[i] = ' ';
            c1++;
        }
    }

    for (int i = s2.length() - 1; i >= 0; --i)
    {
        if (c2 && s2[i] != '#')
        {
            s2[i] = ' ';
            c2--;
        }
        if (s2[i] == '#')
        {
            s2[i] = ' ';
            c2++;
        }
    }

    s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end());
    s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());

    if (s1 == s2)
        return true;
    return false;
}