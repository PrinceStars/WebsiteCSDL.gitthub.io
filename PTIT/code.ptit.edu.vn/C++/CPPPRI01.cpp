#include <bits/stdc++.h>
using namespace std;

void prime(long x)
{
    while (x % 2 == 0)
    {
        cout << 2 << " ";
        x /= 2;
    }

    for (long i = 3; i * i <= x; i += 2)
    {
        while (x % i == 0)
        {
            cout << i << " ";
            x /= i;
        }
    }
    if (x > 1)
        cout << x;
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long x;
        cin >> x;
        prime(x);
    }
    return 0;
}