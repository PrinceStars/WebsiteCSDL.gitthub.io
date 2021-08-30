#include <bits/stdc++.h>
using namespace std;

const long long p = 1e9 + 7;
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
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        long long res = 0;
        for (int i = 1; i < n; i++)
            res = (res + (arr[i] * i) % p) % p;
        cout << res << '\n';
    }
    return 0;
}