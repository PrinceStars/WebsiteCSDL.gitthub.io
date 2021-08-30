#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll p = 1e9 + 7;

ll dao(ll n)
{
    ll m = 0;
    while (n)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}

ll luythua(ll n, ll m)
{
    if (m == 1)
        return n % p;
    ll t = (luythua(n, m / 2)) % p;
    if (m % 2)
        return ((t * t) % p * n) % p;
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
        ll n;
        cin >> n;
        ll m = dao(n);
        cout << luythua(n, m) << '\n';
    }
    return 0;
}