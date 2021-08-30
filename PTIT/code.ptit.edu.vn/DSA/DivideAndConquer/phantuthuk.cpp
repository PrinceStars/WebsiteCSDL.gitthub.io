#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> m >> n >> k;
        int a[m], b[n];
        for (int i = 0; i < m; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int i = 0, j = 0;
        int res;
        while (k-- && i < m && j < n)
        {
            if (a[i] < b[j])
                res = a[i++];
            else
                res = b[j++];
        }
        while (k >= 0 && i < m)
            res = a[i++];
        while (k >= 0 && j < n)
            res = b[j++];
        cout << res << '\n';
    }
    return 0;
}