#include <bits/stdc++.h>
using namespace std;
bool visited[1001] = {};

void DFS(vector<int> adj[], int u)
{
    cout << u << ' ';
    visited[u] = 1;
    for (int j = 0; j < adj[u].size(); j++)
        if (!visited[adj[u][j]])
            DFS(adj, adj[u][j]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        memset(visited, 0, sizeof(visited));
        int v, e, u;
        cin >> v >> e >> u;
        vector<int> adj[v + 1];

        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        for (int i = 1; i <= v; i++)
            sort(adj[i].begin(), adj[i].end());

        DFS(adj, u);
        cout << '\n';
    }
    return 0;
}