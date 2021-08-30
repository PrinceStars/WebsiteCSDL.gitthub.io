#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll p = 1e9 + 7;

void multiply(ll F[2][2], ll M[2][2])
{
    ll x = F[0][0] * M[0][0] % p + F[0][1] * M[1][0] % p;
    ll y = F[0][0] * M[0][1] % p + F[0][1] * M[1][1] % p;
    ll z = F[1][0] * M[0][0] % p + F[1][1] * M[1][0] % p;
    ll w = F[1][0] * M[0][1] % p + F[1][1] * M[1][1] % p;

    F[0][0] = x % p;
    F[0][1] = y % p;
    F[1][0] = z % p;
    F[1][1] = w % p;
}

void power(ll F[2][2], ll n)
{
    if (n == 0 || n == 1)
        return;
    ll M[2][2] = {{1, 1},
                  {1, 0}};

    power(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0)
        multiply(F, M);
}

ll fib(ll n)
{
    ll F[2][2] = {{1, 1},
                  {1, 0}};
    if (n == 0)
        return 0;
    power(F, n - 1);

    return F[0][0];
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << fib(n) << '\n';
    }

    return 0;
}
