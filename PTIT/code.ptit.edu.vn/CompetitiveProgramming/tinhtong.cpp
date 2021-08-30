#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long res = n * (n + 1) / 2;
        cout << res << endl;
    }
    return 0;
}