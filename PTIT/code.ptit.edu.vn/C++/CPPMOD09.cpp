#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;
long long C[1100][900] = {};

long long nCr(int r, int n)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    if (r == 1)
        return n;
    if (C[n][r] == 0)
        C[n][r] = (nCr(r - 1, n - 1) + nCr(r, n - 1)) % MOD;
    return C[n][r];
}

int main()
{
    int t, n, r;
    cin >> t;
    while (t--)
    {
        cin >> n >> r;
        cout << nCr(r, n) << endl;
    }
    return 0;
}