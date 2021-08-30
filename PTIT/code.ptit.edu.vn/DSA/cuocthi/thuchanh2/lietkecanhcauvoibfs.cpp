#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

vector<int> adj[1001];
bool check[1001][1001] = {};
bool vis[1001] = {};
int v, e;
int sothanhphanlienthong = 0;

void BFS(int i)
{
    queue<int> Q;
    vis[i] = 1;
    Q.push(i);
    while (Q.size())
    {
        int u = Q.front();
        Q.pop();

        for (auto j : adj[u])
            if (!vis[j] && !check[u][j] && !check[j][u])
            {
                Q.push(j);
                vis[j] = 1;
            }
    }
}

void solve()
{
    for (int i = 1; i <= v; i++)
    {
        for (auto j : adj[i])
        {
            memset(vis, 0, sizeof(vis));
            int temp = 0;
            if (i < j)
            {
                // cout << i << '|' << j << ' ';
                check[i][j] = 1;
                check[j][i] = 1;
                for (int a = 1; a <= v; a++)
                    if (!vis[a])
                    {
                        temp++;
                        BFS(a);
                    }
                // cout << temp << '.';
                if (temp > sothanhphanlienthong)
                    cout << i << ' ' << j << ' ';
                check[i][j] = 0;
                check[j][i] = 0;
            }
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
        for (int i = 1; i <= 1000; i++)
            adj[i].clear();
        memset(vis, 0, sizeof(vis));
        sothanhphanlienthong = 0;
        cin >> v >> e;

        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        for (int i = 1; i <= v; i++)
            sort(adj[i].begin(), adj[i].end());

        for (int i = 1; i <= v; i++)
            if (!vis[i])
            {
                sothanhphanlienthong++;
                BFS(i);
            }
        // cout << sothanhphanlienthong << ' ';
        solve();
    }
    return 0;
}