#include <bits/stdc++.h>
using namespace std;

long zip(long x)
{
    if (x < 10)
        return x;
    long z = 0;
    while (x)
    {
        z += x % 10;
        x /= 10;
    }
    return zip(z);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long x;
        cin >> x;
        cout << zip(x) << endl;
    }
    return 0;
}