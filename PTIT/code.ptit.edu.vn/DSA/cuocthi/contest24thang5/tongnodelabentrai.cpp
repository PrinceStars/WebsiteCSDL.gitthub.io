#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
int n;
int adj[10001][2];
int res = 0;

bool isleaf(int u)
{
    return adj[u][0] == 0 && adj[u][1] == 0;
}

void solve(int u)
{
    if (isleaf(adj[u][0]))
        res += adj[u][0];
    else
        solve(adj[u][0]);
    if (!isleaf(adj[u][1]))
        solve(adj[u][1]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        res = 0;
        memset(adj, 0, sizeof(adj));
        int root;
        int a, b;
        char c;
        cin >> a >> b >> c;
        root = a;
        if (c == 'R')
            adj[a][1] = b;
        else
            adj[a][0] = b;
        for (int i = 1; i < n; i++)
        {
            cin >> a >> b >> c;
            if (c == 'R')
                adj[a][1] = b;
            else
                adj[a][0] = b;
        }
        solve(root);
        cout << res << '\n';
    }
    return 0;
}