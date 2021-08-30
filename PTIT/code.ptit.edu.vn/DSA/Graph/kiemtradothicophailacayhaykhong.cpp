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
        int n;
        cin >> n;
        bool res = 1;
        bool check[n + 1] = {};
        vector<int> adj[n + 1];
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            cin >> a >> b;
            // if (check[a] && check[b])
            //     res = 0;
            check[a] = 1;
            check[b] = 1;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        for (int i = 1; i <= n; i++)
            if (!check[i])
                res = 0;
        if (res)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}