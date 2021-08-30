#include <bits/stdc++.h>
using namespace std;
int binarySearh(int arr[], int l, int r, int k)
{
    if (l > r)
        return -1;
    int m = (l + r) / 2;
    if (arr[m] == k)
        return 1;
    if (arr[m] > k)
        return binarySearh(arr, l, m - 1, k);
    return binarySearh(arr, m + 1, r, k);
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
        int res = binarySearh(arr, 0, n - 1, k);
        cout << res << '\n';
    }
    return 0;
}