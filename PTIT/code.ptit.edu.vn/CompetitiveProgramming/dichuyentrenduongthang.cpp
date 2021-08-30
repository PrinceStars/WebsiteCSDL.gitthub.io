#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("icpc.in", "r", stdin);
    // freopen("icpc.out", "w", stdout);
    long long x, y;
    while (cin >> x >> y)
    {
        if (x > y)
            swap(x, y);
        cout << long(sqrt((y - x) * 4 - 1)) << '\n';
    }
    return 0;
}