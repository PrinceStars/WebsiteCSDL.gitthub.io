#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll p = 1e9 + 7;
ll arr[10][10];
ll arr2[10][10];
int n;

void multi(ll a[10][10], ll b[10][10])
{
    ll temp[10][10];
    memset(temp, 0, sizeof(temp));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                temp[i][j] = (temp[i][j] + a[i][k] * b[k][j] % p) % p;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = temp[i][j];
}

void power(int k)
{
    if (k == 0 || k == 1)
        return;

    power(k / 2);

    multi(arr, arr);
    if (k % 2)
        multi(arr, arr2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];
        memcpy(arr2, arr, sizeof(arr));
        power(k);
        ll sum = 0;
        for (int i = 0; i < n; i++)
            sum = (sum + arr[i][0]) % p;
        cout << sum << '\n';
    }
    return 0;
}