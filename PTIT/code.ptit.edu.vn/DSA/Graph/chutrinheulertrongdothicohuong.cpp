#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
vector<int> adj[1001];
int v, e;

void solve()
{

    int degin[v + 1] = {};
    for (int i = 1; i <= v; i++)
        for (auto j : adj[i])
            degin[j]++;
    for (int i = 1; i <= v; i++)
        if (degin[i] != adj[i].size())
        {
            cout << "0\n";
            return;
        }
    cout << "1\n";
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
        cin >> v >> e;
        for (int i = 1; i <= v; i++)
            adj[i].clear();
        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
        }
        solve();
    }
    return 0;
}