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
            int j = i + k;
            if (a[i - 1] != a[j - 1])
                DP[i][j] = max(DP[i + 1][j], DP[i][j - 1]);
            else if (a[i] == a[j - 2] && DP[i + 1][j - 1] == j - i - 1)
                DP[i][j] = DP[i + 1][j - 1] + 2;
            else
                DP[i][j] = max(DP[i + 1][j], DP[i][j - 1]);
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
        cout << find(a) << '\n';
    }
    return 0;
}