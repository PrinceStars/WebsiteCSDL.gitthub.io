#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll GCD(ll a, ll b)
{
    return b ? GCD(b, a % b) : a;
}

int main()
{
    ll n, m, day1, day2;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        n = n * (n + 1) / 2;
        if ((n - m) % 2 == 0)
        {
            day1 = (n + m) / 2;
            day2 = day1 - m;
            if (GCD(day1, day2) == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
            cout << "No" << endl;
    }

    return 0;
}