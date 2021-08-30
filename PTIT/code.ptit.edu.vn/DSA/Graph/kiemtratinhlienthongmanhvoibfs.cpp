#include <bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> adj[1001];
int temp = 0;
int v, e;

void DFS(int u)
{
    // cout << u << ' ';
    temp++;
    visited[u] = 1;
    for (auto i : adj[u])
        if (!visited[i])
            DFS(i);
}

void Solve()
{
    for (int i = 1; i <= v; i++)
    {
        memset(visited, 0, sizeof(visited));
        temp = 0;
        DFS(i);
        if (temp != v)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 1; i <= 1000; i++)
            adj[i].clear();
        cin >> v >> e;
        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
        }
        Solve();
    }
    return 0;
}