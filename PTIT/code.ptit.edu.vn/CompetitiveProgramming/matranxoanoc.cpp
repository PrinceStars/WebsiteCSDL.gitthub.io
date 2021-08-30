#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n][n] = {};
    int row = n - 1, col = n - 1;
    int d = 0;
    int dem = 1;
    while (d <= n / 2)
    {
        for (int i = n - col - 1; i <= col; i++)
            arr[n - row - 1][i] = dem++;
        for (int i = n - row; i <= row; i++)
            arr[i][col] = dem++;
        for (int i = col - 1; i >= n - 1 - col; i--)
            arr[row][i] = dem++;
        for (int i = row - 1; i >= n - row; i--)
            arr[i][n - col - 1] = dem++;
        col--;
        row--;
        d++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}