#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

vector<int> adj[1001];
int color[1001]; // | 0 = unvisited | -1 = visited | 1 = visiting |
int v, e;
bool res;

void DFS(int u)
{
    if (res)
        return;
    color[u] = 1;
    for (auto i : adj[u])
        if (color[i] == 0)
            DFS(i);
        else if (color[i] == 1)
        {
            res = 1;
            break;
        }
    color[u] = -1;
}

void solve()
{
    for (int i = 1; i <= v; ++i)
        if (!color[i] && !res)
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
        memset(color, 0, sizeof(color));
        res = 0;
        cin >> v >> e;
        for (int i = 1; i <= v; i++)
            adj[i].clear();
        for (int i = 0; i < e; ++i)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
        }
        solve();
        if (res)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}