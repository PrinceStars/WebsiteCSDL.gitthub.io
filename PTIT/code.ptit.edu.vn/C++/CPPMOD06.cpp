#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll ModA(string a, ll m)
{
    ll mod = 0;
    for (int i = 0; i < a.length(); i++)
    {
        mod = (mod * (10 % m) + (a[i] - 48) % m) % m;
    }
    return mod;
}

ll findMod(ll a, ll b, ll m)
{
    if (b == 0)
        return 1;
    long long t = findMod(a, b / 2, m);
    return b % 2 ? ((t * t) % m * a) % m : (t * t) % m;
}
int main()
{
    ll b, m;
    string a;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> m;
        cout << findMod(ModA(a, m), b, m) << endl;
    }
    return 0;
}