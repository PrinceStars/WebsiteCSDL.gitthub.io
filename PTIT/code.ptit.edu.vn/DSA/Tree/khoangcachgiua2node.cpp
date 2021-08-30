#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
vector<int> adj[1001];
bool vs[1001];
int n;

void solve()
{
    memset(vs, 0, sizeof(vs));
    int x, y;
    cin >> x >> y;
    queue<pii> Q;
    Q.push({x, 0});
    while (Q.size())
    {
        pii u = Q.front();
        Q.pop();
        if (u.first == y)
        {
            cout << u.second << '\n';
            return;
        }
        for (auto i : adj[u.first])
        {
            if (!vs[i])
            {
                vs[i] = 1;
                Q.push({i, u.second + 1});
            }
        }
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
        cin >> n;
        for (int i = 1; i <= 1000; i++)
            adj[i].clear();
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        int q;
        cin >> q;
        while (q--)
            solve();
    }
    return 0;
}