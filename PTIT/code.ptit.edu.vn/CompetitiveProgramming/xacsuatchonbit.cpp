#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string S;
        cin >> S;
        ll temp = 0, res = 0;
        for (int i = 0; i <= k && i < n; i++)
        {
            if (S[i] == '1')
                temp++;
        }
        res += temp * temp;
        for (int i = k + 1; i < n; i++)
        {
            if (S[i - k - 1] == '1')
                temp--;
            if (S[i] == '1')
            {
                res += temp * 2 + 1;
                temp++;
            }
        }
        if (!res)
            cout << "0/1" << '\n';
        else
        {
            ll x = gcd(res, n * n);
            cout << res / x << '/' << n * n / x << '\n';
        }
    }
}