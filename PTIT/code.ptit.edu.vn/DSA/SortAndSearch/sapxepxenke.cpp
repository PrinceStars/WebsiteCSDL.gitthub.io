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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int i = 0, j = n - 1;
        while (i < j)
            cout << arr[j--] << ' ' << arr[i++] << ' ';
        if (i == j)
            cout << arr[i] << ' ';
        cout << '\n';
    }
    return 0;
}