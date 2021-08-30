#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> adj[1001];
int father[1001];
bool check[1001][1001];
bool vis[1001];
int v, e;
bool res;

int findroot(int u)
{
    return father[u] < 0 ? u : findroot(father[u]);
}

void DFS(int u)
{
    if (res)
        return;
    vis[u] = 1;
    for (auto i : adj[u])
        if (!vis[i])
        {
            check[u][i] = check[i][u] = 1;
            father[i] = findroot(u);
            DFS(i);
        }
        else if (!check[u][i] && !check[i][u] && findroot(i) == findroot(u))
            res = 1;
}

void solve()
{
    for (int i = 1; i <= v; ++i)
        if (!vis[i] && !res)
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
        memset(father, -1, sizeof(father));
        memset(vis, 0, sizeof(vis));
        memset(check, 0, sizeof(check));
        res = 0;
        cin >> v >> e;
        for (int i = 1; i <= v; i++)
            adj[i].clear();
        for (int i = 0; i < e; ++i)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        solve();
        if (res)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}