#include <bits/stdc++.h>
using namespace std;
int res = 0;

void move(int arr[100][100], int x, int y, int m, int n)
{
    if (x == m && y == n)
        res++;
    if (x + 1 <= m)
        move(arr, x + 1, y, m, n);
    if (y + 1 <= n)
        move(arr, x, y + 1, m, n);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        res = 0;
        int n, m;
        cin >> m >> n;
        int arr[100][100];

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];
        move(arr, 0, 0, m - 1, n - 1);
        cout << res << '\n';
    }
    return 0;
}