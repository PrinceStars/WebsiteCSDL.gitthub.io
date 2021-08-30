#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (l + 1 == r)
        return l + 1;
    if (arr[l] > x)
        return -1;
    int m = (l + r) / 2;
    if (arr[m] == x)
        return m + 1;
    if (arr[m] < x)
        return binarySearch(arr, m, r, x);
    return binarySearch(arr, l, m, x);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << binarySearch(arr, 0, n - 1, x) << '\n';
    }

    return 0;
}