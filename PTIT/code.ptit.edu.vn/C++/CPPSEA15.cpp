#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (arr[r] <= x)
        return r;
    if (arr[l] > x)
        return l;

    int m = l + (r - l) / 2;
    if (arr[m] <= x && arr[m + 1] > x)
        return m;
    if (arr[m] > x)
        return binarySearch(arr, l, m - 1, x);
    return binarySearch(arr, m + 1, r, x);
}

int main()
{
    int t, n, x, k;
    int left, right, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];

        for (i = 0; i < n; i++)
            cin >> arr[i];
        cin >> k >> x;
        k /= 2;

        left = binarySearch(arr, 0, n - 1, x);
        j = left + 1;
        if (arr[left] == x)
            left--;

        i = left - k + 1, right = j + k - 1;
        if (right >= n)
        {
            i = max(0, i - (right - n + 1));
            right = n - 1;
        }
        if (i < 0)
        {
            right = min(n - 1, right - i);
            i = 0;
        }

        while (i <= left)
            cout << arr[i++] << " ";

        while (j <= right)
            cout << arr[j++] << " ";
        cout << endl;
    }
    return 0;
}