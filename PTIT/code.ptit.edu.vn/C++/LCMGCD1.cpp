#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long a, b;
        cin >> a >> b;
        long ucln = gcd(a, b);
        long long bcnn = a * b / ucln;
        cout << bcnn << " " << ucln << endl;
    }
}