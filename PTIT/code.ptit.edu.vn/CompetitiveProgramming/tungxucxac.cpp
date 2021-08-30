#include <bits/stdc++.h>
using namespace std;

long long find(int n, int x)
{
    long long DP[n + 1][x + 1] = {};

    for (int j = 1; j <= 6 && j <= x; j++)
        DP[1][j] = 1;

    for (int i = 2; i <= n; i++)
        for (int j = 1; j <= x; j++)
            for (int k = 1; k <= 6 && k < j; k++)
                DP[i][j] += DP[i - 1][j - k];
    return DP[n][x];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        cout << find(n, s) << '\n';
    }

    return 0;
}
