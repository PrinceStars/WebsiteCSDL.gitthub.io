#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("zinput.txt", "r", stdin);
    // freopen("zoutput.txt", "w", stdout);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int s1, s2, s3;
        string a, b, c;
        cin >> s1 >> s2 >> s3;
        cin >> a >> b >> c;
        int DP[s1 + 1][s2 + 1][s3 + 1] = {};
        for (int i = 1; i <= s1; i++)
        {
            for (int j = 1; j <= s2; j++)
            {
                for (int k = 1; k <= s3; k++)
                {
                    if (a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1])
                        DP[i][j][k] = DP[i - 1][j - 1][k - 1] + 1;
                    else
                        DP[i][j][k] = max(max(DP[i - 1][j][k], DP[i][j - 1][k]), DP[i][j][k - 1]);
                }
            }
        }
        cout << DP[s1][s2][s3] << '\n';
    }
    return 0;
}