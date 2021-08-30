#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll p = 1e9 + 7;
unordered_map<ll, ll> fibo;

ll fibonacci(ll n)
{
    if (n <= 1)
        return n;
    if (!fibo[n])
    {
        int k = (n + 1) / 2;
        if (n % 2)
            fibo[n] = ((fibonacci(k) * fibonacci(k)) % p + (fibonacci(k - 1) * fibonacci(k - 1)) % p) % p;
        else
            fibo[n] = ((((2 * fibonacci(k - 1)) % p + fibonacci(k))) % p * fibonacci(k)) % p;
    }
    return fibo[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    fibo[0] = 0;
    fibo[1] = 1;

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << fibonacci(n) << '\n';
    }
    return 0;
}