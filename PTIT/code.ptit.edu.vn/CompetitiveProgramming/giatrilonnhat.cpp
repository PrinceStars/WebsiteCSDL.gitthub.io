#include <bits/stdc++.h>

using namespace std;

const int maxn = 103;

long long a[maxn];
long long dp[maxn][maxn];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int len = 3; len <= n; len++)
    {
        for (int i = 1; i <= n - len + 1; i++)
        {
            int j = i + len - 1;
            long long res = 0;
            for (int k = i + 1; k <= j; k++)
                res = max(res, dp[i][k] + dp[k][j]);
            dp[i][j] = a[i] * a[j] + res;
        }
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //         cout << dp[i][j] << ' ';
    //     cout << '\n';
    // }
    cout << dp[1][n];
    return 0;
}