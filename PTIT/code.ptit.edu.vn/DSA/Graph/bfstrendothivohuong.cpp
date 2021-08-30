#include <bits/stdc++.h>
using namespace std;

bool visited[1001];

void BFS(vector<int> adj[], int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while (!q.empty())
    {
        int t = q.front();
        q.pop();
        cout << t << ' ';
        for (auto i : adj[t])
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
    }
    cout << '\n';
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
        for (int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        for (int i = 1; i <= v; i++)
            sort(adj[i].begin(), adj[i].end());

        BFS(adj, u);
    }
    return 0;
}