#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int c, int n)
{
    int DP[n + 1][c + 1] = {};

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= c; j++)
            if (j < arr[i - 1])
                DP[i][j] = DP[i - 1][j];
            else
                DP[i][j] = max(arr[i - 1] + DP[i - 1][j - arr[i - 1]], DP[i - 1][j]);
    return DP[n][c];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int c, n;
    cin >> c >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << findMax(arr, c, n) << '\n';
    return 0;
}