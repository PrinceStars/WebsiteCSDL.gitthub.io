#include <bits/stdc++.h>
using namespace std;
const long long p = 1e9 + 7;
long long Cnk(int n, int k)
{
    long long C[k + 1] = {};
    C[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = min(i, k); j > 0; j--)
            C[j] = (C[j] % p + C[j - 1] % p) % p;
    return C[k];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << Cnk(n, k) << '\n';
    }
    return 0;
}