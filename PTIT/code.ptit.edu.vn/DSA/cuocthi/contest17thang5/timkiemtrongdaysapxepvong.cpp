#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

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
        int res = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == k)
            {
                res = i;
            }
        }
        cout << res + 1 << '\n';
    }
    return 0;
}