#include <bits/stdc++.h>
using namespace std;

bool found(int arr[], int n, int sum)
{
    bool DP[n + 1][sum + 1] = {};

    for (int i = 0; i < n + 1; i++)
        DP[i][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (j < arr[i - 1])
                DP[i][j] = DP[i - 1][j];
            else
                DP[i][j] = DP[i - 1][j] || DP[i - 1][j - arr[i - 1]];
        }
        if (DP[i][sum] == 1)
            return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (found(arr, n, s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}