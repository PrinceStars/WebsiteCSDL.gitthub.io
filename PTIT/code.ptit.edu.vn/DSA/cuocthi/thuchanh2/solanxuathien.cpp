#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == k)
                res++;
        }
        if (res)
            cout << res << '\n';
        else
            cout << "-1\n";
    }
    return 0;
}