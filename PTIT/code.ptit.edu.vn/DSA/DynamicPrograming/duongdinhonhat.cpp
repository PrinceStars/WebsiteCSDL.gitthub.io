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
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        for (int i = 1; i < n; i++)
            arr[i][0] += arr[i - 1][0];
        for (int i = 1; i < m; i++)
            arr[0][i] += arr[0][i - 1];
        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
                arr[i][j] += min(min(arr[i - 1][j], arr[i][j - 1]), arr[i - 1][j - 1]);
        cout << arr[n - 1][m - 1] << '\n';
    }
    return 0;
}