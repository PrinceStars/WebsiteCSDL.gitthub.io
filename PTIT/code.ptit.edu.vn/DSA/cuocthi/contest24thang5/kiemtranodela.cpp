#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
int n;
vector<int> adj[10001];
unordered_set<int> level;

void solve(int u, int lv)
{
    if (!adj[u].size())
        level.insert(lv);
    for (auto i : adj[u])
        solve(i, lv + 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        level.clear();
        for (int i = 1; i <= 10000; i++)
            adj[i].clear();
        int nodegoc;
        int a, b;
        char c;
        cin >> a >> b >> c;
        nodegoc = a;
        if (c == 'R')
            adj[a].push_back(b);
        else
            adj[a].insert(adj[a].begin(), b);
        for (int i = 1; i < n; i++)
        {
            cin >> a >> b >> c;
            if (c == 'R')
                adj[a].push_back(b);
            else
                adj[a].insert(adj[a].begin(), b);
        }
        solve(nodegoc, 0);
        if (level.size() > 1)
            cout << "0\n";
        else
            cout << "1\n";
    }
    return 0;
}