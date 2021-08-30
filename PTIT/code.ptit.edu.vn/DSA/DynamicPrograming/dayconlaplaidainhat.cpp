#include <bits/stdc++.h>
using namespace std;
int DP[101][101];

int find(string s, int n)
{
    for (int i = 0; i <= n; i++)
    {
        DP[i][0] = 0;
        DP[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != j && s[i - 1] == s[j - 1])
                DP[i][j] = DP[i - 1][j - 1] + 1;
            else
                DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
        }
    }

    return DP[n][n];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        memset(DP, 0, sizeof(DP));
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << find(s, n) << '\n';
    }

    return 0;
}