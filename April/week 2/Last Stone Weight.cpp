int lastStoneWeight(vector<int> &v)
{
    priority_queue<int, vector<int>> pq;

    for (auto i : v)
        pq.push(i);

    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();

        if (a == b)
            continue;
        else
            pq.push(a - b);
    }

    if (pq.size() == 1)
        return pq.top();
    else
        return 0;
}