#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int s, d;
    cin >> s >> d;
    if (d * 9 < s)
    {
        cout << "-1\n";
        return;
    }
    int res[d];
    s -= 1;
    for (int i = d - 1; i >= 0; i--)
    {
        if (s > 9)
        {
            res[i] = 9;
            s -= 9;
        }
        else
        {
            res[i] = s;
            s = 0;
        }
    }
    res[0] = s + 1;
    for (int i = 0; i < d; i++)
        cout << res[i];
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}