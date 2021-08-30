#include <bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> adj[1001];

void BFS(int vertex)
{
    queue<int> Q;
    Q.push(vertex);
    while (Q.size())
    {
        int u = Q.front();
        Q.pop();
        visited[u] = 1;

        for (auto i : adj[u])
            if (!visited[i])
                Q.push(i);
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
        memset(visited, 0, sizeof(visited));
        for (int i = 1; i <= 1000; i++)
            adj[i].clear();
        int v, e;
        cin >> v >> e;
        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int res = 0;
        for (int i = 1; i <= v; i++)
        {
            if (!visited[i])
            {
                res++;
                BFS(i);
            }
        }
        cout << res << '\n';
    }
    return 0;
}