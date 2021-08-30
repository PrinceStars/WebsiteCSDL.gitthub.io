#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
int v, e, u;
vector<int> adj[1001];
bool vis[1001];

void DFS(int u)
{
    vis[u] = 1;
    cout << u << ' ';
    for (auto i : adj[u])
        if (!vis[i])
            DFS(i);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e >> u;
        for (int i = 1; i <= v; i++)
            adj[i].clear();
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
        }
        for (int i = 1; i <= v; i++)
            sort(adj[i].begin(), adj[i].end());
        DFS(u);
        cout << '\n';
    }
    return 0;
}