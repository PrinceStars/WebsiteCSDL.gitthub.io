#include <bits/stdc++.h>
using namespace std;

void prime(long long x)
{
    long long max = 1;
    if (x % 2 == 0)
        max = 2;
    while (x % 2 == 0)
        x /= 2;

    for (long long i = 3; i * i <= x; i += 2)
    {
        if (x % i == 0)
        {
            max = i;
            while (x % i == 0)
                x /= i;
        }
    }
    if (x > 1)
        max = x;
    cout << max;
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        prime(x);
    }
    return 0;
}