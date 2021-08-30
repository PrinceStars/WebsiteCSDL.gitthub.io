#include <bits/stdc++.h>
using namespace std;

long long modulo(int n, long long k)
{
    long long m;
    if (n < k)
        m = n * (n + 1) / 2;
    else
        m = k * (k - 1) / 2 * (n / k) + (n % k) * (n % k + 1) / 2;
    return m;
}

int main()
{
    int t, n;
    long long k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << modulo(n, k) << endl;
    }
    return 0;
}