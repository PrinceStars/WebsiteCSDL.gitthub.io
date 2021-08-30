#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b)
{
    return b == 0 ? a : GCD(b, a % b);
}

int main()
{
    long long a, x, y;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> x >> y;
        long long n = GCD(x, y);
        while (n--)
            cout << a;
        cout << endl;
    }
    return 0;
}