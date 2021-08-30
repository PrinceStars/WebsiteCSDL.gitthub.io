#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        int kernel[3][3];
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> kernel[i][j];
        ll res = 0;
        for (int i = 0; i < n - 3 + 1; i++)
        {
            for (int j = 0; j < m - 3 + 1; j++)
            {
                ll temp = 0;
                for (int row = i; row < i + 3; row++)
                {
                    for (int col = j; col < j + 3; col++)
                    {
                        temp += arr[row][col] * kernel[row - i][col - j];
                    }
                }
                res += temp;
            }
        }
        cout << res << '\n';
    }
    return 0;
}