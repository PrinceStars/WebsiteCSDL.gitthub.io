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
        long n;
        cin >> n;
        long long arr[n + 1] = {};
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        for (int i = 3; i <= n; i++)
            arr[i] += max(arr[i - 2], arr[i - 3]);
        cout << max(arr[n], arr[n - 1]) << '\n';
    }
    return 0;
}