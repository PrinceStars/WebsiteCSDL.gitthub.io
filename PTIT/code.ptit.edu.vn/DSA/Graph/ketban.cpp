#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
int n, m;
set<int> adj[100001];
bool vis[100001];
int res;
int count_vertex;

void DFS(int u)
{
    vis[u] = 1;
    res = max(res, count_vertex);
    for (auto it : adj[u])
        if (!vis[it])
        {
            count_vertex++;
            DFS(it);
        }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            adj[i].clear();
        memset(vis, 0, sizeof(vis));
        res = 0;
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].insert(b);
            adj[b].insert(a);
        }
        for (int i = 1; i <= n; i++)
            if (!vis[i])
            {
                count_vertex = 1;
                DFS(i);
            }
        cout << res << '\n';
    }
    return 0;
}