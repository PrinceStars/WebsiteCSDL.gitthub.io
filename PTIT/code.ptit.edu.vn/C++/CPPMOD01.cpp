#include <bits/stdc++.h>
using namespace std;

long long modulo(long x, long y, long p)
{
    if (y == 0)
        return 1;
    long long t = modulo(x, y / 2, p);
    return y % 2 == 1 ? ((t * t) % p * x) % p : (t * t) % p;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long x, y, p;
        cin >> x >> y >> p;
        x %= p;
        cout << modulo(x, y, p) << endl;
    }
    return 0;
}