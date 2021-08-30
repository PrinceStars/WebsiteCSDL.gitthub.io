#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll findMod(ll a, ll b, ll m)
{
    if (b == 0)
        return 0;
    ll t = findMod(a, b / 2, m);
    return b % 2 ? (a % m + 2 * (t % m)) % m : (2 * (t % m)) % m;
}

int main()
{
    ll a, b, m;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> m;
        cout << findMod(a, b, m) << endl;
    }
    return 0;
}