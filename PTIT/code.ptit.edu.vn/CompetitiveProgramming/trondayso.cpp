#include <bits/stdc++.h>
using namespace std;
const long p = 1e9 + 7;

long nCr(int n, int r)
{
    long C[r + 1] = {};
    C[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = min(i, r); j > 0; j--)
            C[j] = (C[j] % p + C[j - 1] % p) % p;
    return C[r];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << nCr(n + m, n) << '\n';
    }
}