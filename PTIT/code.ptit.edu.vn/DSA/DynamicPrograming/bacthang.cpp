#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll p = 1e9 + 7;
ll arr[101];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    arr[1] = 1;
    for (int i = 2; i <= 100; i++)
        arr[i] = arr[i - 1] * 2 % p;
    cout << '\n';
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll arr2[n + 1];
        for (int i = 1; i <= k && i <= n; i++)
            arr2[i] = arr[i];
        if (k >= n)
            cout << arr[n] << '\n';
        else
        {
            ll sum = 0;
            for (int i = 1; i <= k; i++)
                sum = (sum + arr[i]) % p;
            arr2[k + 1] = sum;
            for (int i = k + 2; i <= n; i++)
            {
                sum = (sum + arr2[i - 1] + (p - arr2[i - 1 - k]) % p) % p;
                arr2[i] = sum;
            }
            cout << arr2[n] << '\n';
        }
    }
    return 0;
}
