#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int k)
{
    if (l > r)
        return -1;
    int m = (l + r) / 2;
    if (arr[m] == k)
        return m + 1;
    if (arr[l] <= arr[m])
    {
        if (k >= arr[l] && k <= arr[m])
            return binarySearch(arr, l, m - 1, k);

        return binarySearch(arr, m + 1, r, k);
    }

    if (k >= arr[m] && k <= arr[r])
        return binarySearch(arr, m + 1, r, k);

    return binarySearch(arr, l, m - 1, k);
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
        int res = binarySearch(arr, 0, n - 1, k);
        cout << res << '\n';
    }
    return 0;
}