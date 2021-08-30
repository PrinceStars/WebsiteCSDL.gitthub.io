#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
int v, e;
vector<int> adj[1001];
int father[1001];
bool vis[1001];

int findRoot(int u)
{
    return father[u] == -1 ? u : findRoot(father[u]);
}

void DFS(int u)
{
    vis[u] = 1;
    for (auto i : adj[u])
    {
        if (!vis[i])
        {
            father[i] = u;
            DFS(i);
        }
    }
}

bool checkSameFather(int x, int y)
{
    // cout << findRoot(x) << "." << findRoot(y) << ' ';
    return findRoot(x) == findRoot(y);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        cin >> v >> e;
        for (int i = 1; i <= v; i++)
            adj[i].clear();
        memset(father, -1, sizeof(father));
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        for (int i = 1; i <= v; i++)
        {
            if (!vis[i])
            {
                DFS(i);
            }
        }
        int Q;
        cin >> Q;
        for (int i = 0; i < Q; i++)
        {
            int x, y;
            cin >> x >> y;
            if (checkSameFather(x, y))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}