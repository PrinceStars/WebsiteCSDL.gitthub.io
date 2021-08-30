#include <bits/stdc++.h>
using namespace std;

#define ll long long

int findres(string a, string b)
{
    int s1 = a.length(), s2 = b.length();
    int DP[s1 + 1][s2 + 1] = {};
    int check[s1 + 1][s2 + 1] = {};
    cout << s1 << ' ' << s2 << '\n';
    for (int i = 1; i <= s1; i++)
    {
        if (a[i - 1] == b[0])
        {
            DP[i][1] = 1;
            check[i][1] = 1;
        }
        // else
        //     DP[i][1] = max(max(DP[i][1], DP[i - 1][1]), 1);
    }

    for (int i = 1; i <= s2; i++)
    {
        if (a[0] == b[i - 1])
        {
            DP[1][i] = 1;
            check[1][i] = 1;
        }
        // else
        //     DP[1][i] = max(DP[1][i], DP[1][i - 1]);
    }

    for (int i = 2; i <= s1; i++)
    {
        for (int j = 2; j <= s2; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                if (a[i - 1] == b[j - 1] && check[i - 1][j - 1])
                {
                    DP[i][j] = DP[i - 1][j - 1] + 1;
                    check[i][j] = 1;
                }
                else
                    DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
            }
            else
                DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
        }
    }

    for (int i = 0; i <= s1; i++)
    {
        for (int j = 0; j <= s2; j++)
        {
            cout << DP[i][j] << ' ';
        }
        cout << '\n';
    }
    for (int i = 0; i <= s1; i++)
    {
        for (int j = 0; j <= s2; j++)
        {
            cout << check[i][j] << ' ';
        }
        cout << '\n';
    }

    return s1 + s2 - DP[s1][s2] * 2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << a << ' ' << b << '\n';
        cout << findres(a, b) << '\n';
    }
    return 0;
}