/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

bool fun(BinaryMatrix &m, int r, int j)
{
    for (int i = 0; i < r; ++i)
        if (m.get(i, j) == 1)
            return true;
    return false;
}

int leftMostColumnWithOne(BinaryMatrix &m)
{
    vector<int> v = m.dimensions();
    int r = v[0], c = v[1];
    int l = 0, h = c - 1;
    int mid, loc = c - 1;

    while (l <= h)
    {
        mid = (h + l) / 2;

        if (fun(m, r, mid))
        {
            h = mid - 1;
            loc = mid;
        }
        else
            l = mid + 1;
    }
    if (loc == c - 1 && !fun(m, r, loc))
        return -1;
    else
        return loc;
}