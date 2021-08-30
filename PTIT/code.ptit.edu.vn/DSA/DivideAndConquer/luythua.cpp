#include <bits/stdc++.h>
using namespace std;
const long long p = 1e9 + 7;
long luythua(long n, long k)
{
    if (k == 0)
        return 1;
    long t = luythua(n, k / 2);
    if (k % 2)
        return ((t * t) % p * n) % p;
    else
        return (t * t) % p;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        cout << luythua(n, k) << '\n';
    }
    return 0;
}