#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int s1 = a.length(), s2 = b.length();
        int DP[s1 + 1][s2 + 1] = {};
        for (int i = 1; i <= s1; i++)
        {
            for (int j = 1; j <= s2; j++)
            {
                if (a[i - 1] == b[j - 1])
                    DP[i][j] = DP[i - 1][j - 1] + 1;
                else
                    DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
            }
        }
        cout << DP[s1][s2] << '\n';
    }
    return 0;
}