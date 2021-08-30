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
        int n, k;
        cin >> n >> k;
        long long arr[n] = {};
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (int i = 1; i < n; i++)
            arr[i] += arr[i - 1];
        cout << max(arr[n - 1] - 2 * arr[k - 1], arr[n - 1] - 2 * arr[n - k - 1]) << '\n';
    }
    return 0;
}