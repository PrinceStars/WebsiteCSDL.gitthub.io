#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
const ll p = 1e9 + 7;
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
        ll res = 1;
        if (k < n)
        {
            for (int i = 0; i < k; i++)
                res = (res * (n - i)) % p;
            cout << res << '\n';
        }
        else
            cout << "0\n";
    }
    return 0;
}