#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    ll maxr3, maxr2, maxl2, maxl3;
    ll res = INT_MIN;

    maxr2 = arr[n - 1] * arr[n - 2];
    maxl2 = arr[0] * arr[1];
    maxr3 = maxr2 * arr[n - 3];
    maxl3 = maxl2 * arr[n - 1];
    res = max(max(max(maxl2, maxl3), maxr2), maxr3);
    cout << res;

    return 0;
}