#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, m, x;
    cin >> n >> m >> x;
    x--;
    ll col = x / n;
    ll row = x % n;
    cout << row * m + col + 1 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}