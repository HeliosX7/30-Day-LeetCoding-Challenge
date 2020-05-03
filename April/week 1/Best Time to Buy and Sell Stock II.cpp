const int inf = 1e9 + 5;
int maxProfit(vector<int> &p)
{
    int curWithoutStock = 0;
    int curWithStock = -inf;
    for (auto i : p)
    {
        curWithStock = max(curWithStock, curWithoutStock - i);
        curWithoutStock = max(curWithoutStock, curWithStock + i);
    }

    return curWithoutStock;
}