int check(int n)
{
    int sum = 0;
    while (n)
    {
        int r = n % 10;
        sum += r * r;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n)
{
    unordered_set<int> vis;
    while (true)
    {

        n = check(n);

        if (vis.count(n) == 1)
            return false;
        vis.insert(n);
        if (n == 1)
            return true;
    }

    return true;
}