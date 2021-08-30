#include <bits/stdc++.h>
using namespace std;

int find(string a)
{
    int n = a.length();
    int DP[n + 1][n + 1] = {};
    for (int i = 1; i <= n; i++)
        DP[i][i] = 1;
    for (int k = 1; k < n; k++)
    {
        for (int i = 1; i <= n - k; i++)
        {
            if (a[i - 1] != a[i + k - 1])
                DP[i][i + k] = max(DP[i + 1][i + k], DP[i][i + k - 1]);
            else
                DP[i][i + k] = DP[i + 1][i + k - 1] + 2;
        }
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //         cout << DP[i][j] << ' ';
    //     cout << '\n';
    // }
    return DP[1][n];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        cout << a.length() - find(a) << '\n';
    }
    return 0;
}