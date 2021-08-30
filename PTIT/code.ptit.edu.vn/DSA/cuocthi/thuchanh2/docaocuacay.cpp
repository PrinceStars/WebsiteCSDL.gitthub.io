#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
vector<int> adj[100001];
bool vis[100001] = {};
int res = 0;

void DFS(int u, int lv)
{
    vis[u] = 1;
    // cout << u << ' ';
    res = max(res, lv);
    for (auto i : adj[u])
        if (!vis[i])
            DFS(i, lv + 1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        res = 0;
        for (int i = 1; i <= n; i++)
            adj[i].clear();
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        DFS(1, 0);
        cout << res << '\n';
    }
    return 0;
}