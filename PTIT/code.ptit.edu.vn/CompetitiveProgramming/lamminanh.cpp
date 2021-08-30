#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    freopen("icpc.in", "r", stdin);
    freopen("icpc.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, l;
        cin >> n >> m >> l;
        ll arr[n + 1][m + 1] = {};
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> arr[i][j];

        for (int i = 1; i <= n; i++)
            for (int j = 2; j <= m; j++)
                arr[i][j] += arr[i][j - 1];

        for (int i = 1; i <= n - l + 1; i++)
        {
            for (int j = 1; j <= m - l + 1; j++)
            {
                ll sum = 0;
                for (int a = 0; a < l; a++)
                    sum += arr[i + a][j + l - 1] - arr[i + a][j - 1];
                // cout << sum << ' ';
                arr[i][j] = sum / (l * l);
            }
        }

        for (int i = 1; i <= n - l + 1; i++)
        {
            for (int j = 1; j <= m - l + 1; j++)
                cout << arr[i][j] << ' ';
            cout << '\n';
        }
    }
    return 0;
}