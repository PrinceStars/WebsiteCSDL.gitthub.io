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

void BFS(int u)
{
    queue<int> Q;
    Q.push(u);
    vis[u] = 1;
    while (Q.size())
    {
        int Qf = Q.front();
        Q.pop();

        for (auto i : adj[Qf])
            if (!vis[i])
            {
                check[Qf][i] = check[i][Qf] = 1;
                father[i] = findroot(Qf);
                vis[i] = 1;
                Q.push(i);
            }
            else if (!check[Qf][i] && !check[i][Qf] && findroot(i) == findroot(Qf))
                res = 1;
    }

    if (res)
        return;
    vis[u] = 1;
}

void solve()
{
    for (int i = 1; i <= v; ++i)
        if (!vis[i] && !res)
            BFS(i);
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