#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

long GCDof(long a, long b)
{
    return b == 0 ? a : GCDof(b, a % b);
}

ull LCMof(long x, long y, long z)
{
    x = x * y / GCDof(x, y);
    return x * z / GCDof(x, z);
}

void find(long x, long y, long z, int n)
{
    ull lcm = LCMof(x, y, z);
    ull min = 1;
    ull max = 10;
    n--;
    while (n--)
    {
        min *= 10;
        max *= 10;
    }
    max--;
    if (min % lcm == 0)
    {
        cout << min << endl;
        return;
    }
    for (ull i = (min / lcm + 1) * lcm; i <= max; i += lcm)
        if (i % lcm == 0)
        {
            cout << i << endl;
            return;
        }
    cout << -1 << endl;
}
int main()
{
    int t, n;
    long x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z >> n;
        find(x, y, z, n);
    }
    return 0;
}