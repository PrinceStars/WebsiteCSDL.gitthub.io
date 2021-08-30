#include <bits/stdc++.h>
using namespace std;
#define ll long long
set<int> adj[100001];
bool vis[100001];
int temp = 0;

void DFS(int u)
{
    temp++;
    vis[u] = 1;
    for (auto i : adj[u])
    {
        if (!vis[i])
        {
            DFS(i);
        }
    }
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
        for (int i = 1; i <= n; i++)
            adj[i].clear();
        memset(vis, 0, sizeof(vis));
        int res = 0;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].insert(b);
            adj[b].insert(a);
        }

        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                temp = 0;
                DFS(i);
                res = max(res, temp);
            }
        }
        cout << res << '\n';
    }
    return 0;
}