#include <bits/stdc++.h>
using namespace std;

int findMax(int w[], int v[], int n, int cap)
{
    int DP[n + 1][cap + 1] = {};

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= cap; j++)
        {
            if (j < w[i - 1])
                DP[i][j] = DP[i - 1][j];
            else
                DP[i][j] = max(v[i - 1] + DP[i - 1][j - w[i - 1]], DP[i - 1][j]);
        }
    }
    return DP[n][cap];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int v;
        cin >> n >> v;
        int weights[n], values[n];
        for (int i = 0; i < n; i++)
            cin >> weights[i];
        for (int i = 0; i < n; i++)
            cin >> values[i];
        cout << findMax(weights, values, n, v) << '\n';
    }
    return 0;
}