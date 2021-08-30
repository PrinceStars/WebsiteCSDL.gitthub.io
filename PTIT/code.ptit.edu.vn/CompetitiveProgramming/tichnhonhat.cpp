#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        ll ans = 1e18;
        for (int i = 0; i < 2; ++i)
        {
            ll da = min(n, a - x);
            ll db = min(n - da, b - y);
            ans = min(ans, (a - da) * (b - db));
            swap(a, b);
            swap(x, y);
        }
        cout << ans << '\n';
    }
    return 0;
}
