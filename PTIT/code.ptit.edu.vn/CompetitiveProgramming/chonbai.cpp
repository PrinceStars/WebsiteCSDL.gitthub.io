#include <bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;

long long res(map<int, int> a, int n)
{
    int temp = 1;
    long long r = 1;
    for (int i = 0; i < n; i++)
    {
        temp = temp - 1 + a[i];
        r = (r * (temp % mod)) % mod;
    }
    return r;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        map<int, int> arr;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr[x]++;
        }
        cout << res(arr, n) << endl;
    }
    return 0;
}