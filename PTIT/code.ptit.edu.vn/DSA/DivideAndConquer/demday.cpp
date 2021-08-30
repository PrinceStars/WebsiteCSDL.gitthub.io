#include <bits/stdc++.h>
using namespace std;
const long long p = 123456789;
long long luythua(long long n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    long long t = luythua(n / 2) % p;
    if (n % 2)
        return t * t % p * 2 % p;
    return t * t % p;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << luythua(n - 1) << '\n';
    }
    return 0;
}