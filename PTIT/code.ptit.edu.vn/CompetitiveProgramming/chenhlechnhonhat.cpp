#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int res = INT_MAX;
        for (int i = 1; i < n; i++)
            if (arr[i] - arr[i - 1] < res)
                res = arr[i] - arr[i - 1];
        cout << res << endl;
    }
    return 0;
}