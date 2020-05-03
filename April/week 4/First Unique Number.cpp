unordered_map<int, int> m;
queue<int> q;
FirstUnique(vector<int> &nums)
{
    for (auto i : nums)
        m[i]++;
    for (auto i : nums)
        if (m[i] == 1)
            q.push(i);
}

int showFirstUnique()
{
    while (!q.empty())
    {
        int x = q.front();
        if (m[x] == 1)
            return x;
        q.pop();
    }

    return -1;
}

void add(int value)
{
    m[value]++;
    if (m.count(value) <= 1)
        q.push(value);
}

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */