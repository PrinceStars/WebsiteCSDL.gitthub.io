#include <bits/stdc++.h>
using namespace std;
int binarySearch(bool arr[], int l, int r, int n)
{
    if (r == 0)
        return -1;
    if (l == n - 1)
        return n - 1;
    int m = (l + r) / 2;
    if (arr[m] == 0 && arr[m + 1] == 1)
        return m;
    if (arr[m] == 0)
        return binarySearch(arr, m + 1, r, n);
    return binarySearch(arr, l, m, n);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << binarySearch(arr, 0, n - 1, n) + 1 << '\n';
    }
    return 0;
}