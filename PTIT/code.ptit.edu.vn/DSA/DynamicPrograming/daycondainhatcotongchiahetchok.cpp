#include <bits/stdc++.h>
using namespace std;

int find(int arr[], int n, int k)
{
    int DP[n + 1][k] = {0};
    for (int i = 1; i < k; i++)
        DP[0][i] = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        int t = arr[i - 1] % k;
        for (int j = 0; j < k; j++)
            DP[i][j] = max(DP[i - 1][(j + k - t) % k] + 1, DP[i - 1][j]);
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << arr[i - 1] << ' ';
    //     for (int j = 0; j < k; j++)
    //         cout << DP[i][j] << ' ';
    //     cout << '\n';
    // }
    return DP[n][0];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << find(arr, n, k) << '\n';
    }
    return 0;
}