#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long mod = 1000000007;
    int t, n, x, i;
    cin >> t;
    while (t--)
    {
        long long res = 0;
        cin >> n >> x;
        long long arr[n] = {1};
        for (i = 1; i < n; i++)
            arr[i] = (arr[i - 1] * x) % mod;
        i--;
        while (i + 1)
        {
            cin >> x;
            res = (res + (arr[i--] * (x % mod)) % mod) % mod;
        }
        cout << res << endl;
    }
    return 0;
}