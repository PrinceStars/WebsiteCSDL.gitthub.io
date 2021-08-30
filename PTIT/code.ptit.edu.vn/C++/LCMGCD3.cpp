#include <bits/stdc++.h>
using namespace std;
const long Mod = 1000000007;

int GCD(int a, int b)
{
    return b ? GCD(b, a % b) : a;
}

long result(long a, int b)
{
    if (b == 0)
        return 1;
    long long t = result(a, b / 2);
    return b % 2 ? ((t * t) % Mod * a) % Mod : (t * t) % Mod;
}

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> x;
        int gcd = x;
        long multi = x;

        for (int i = 1; i < n; i++)
        {
            cin >> x;
            if (gcd != 1)
                gcd = GCD(gcd, x);
            multi = (multi * x) % Mod;
        }
        cout << result(multi, gcd) << endl;
    }
    return 0;
}