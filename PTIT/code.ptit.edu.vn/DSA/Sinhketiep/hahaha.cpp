#include <bits/stdc++.h>
using namespace std;
int n;

void solve(string res, int i)
{
    if (i == n - 1)
    {
        cout << res << '\n';
        return;
    }
    solve(res + 'A', i + 1);
    if (res[i] != 'H' && i != n - 2)
        solve(res + 'H', i + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve("H", 0);
    }
    return 0;
}