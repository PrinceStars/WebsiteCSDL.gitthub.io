#include <bits/stdc++.h>
using namespace std;

int find(int n, int p)
{
    int res = 0, i = p;
    while (i <= n)
    {
        res += n / i;
        i *= p;
    }
    return res;
}

int main()
{
    int t, n, p;
    cin >> t;
    while (t--)
    {
        cin >> n >> p;
        cout << find(n, p) << endl;
    }
    return 0;
}