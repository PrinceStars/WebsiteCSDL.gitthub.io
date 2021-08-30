#include <bits/stdc++.h>
using namespace std;

long GCD(long a, long b)
{
    return b ? GCD(b, a % b) : a;
}

int main()
{
    long t, a;
    string b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        long mod = 0;
        for (int i = 0; i < b.length(); i++)
            mod = ((mod * (10 % a)) % a + (b[i] - 48) % a) % a;
        cout << GCD(a, mod) << endl;
    }
    return 0;
}