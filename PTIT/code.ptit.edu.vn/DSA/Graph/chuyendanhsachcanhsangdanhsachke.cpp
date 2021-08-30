#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;
        vector<int> adj[v + 1];

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
        {
            cout << i << ": ";
            for (auto it : adj[i])
                cout << it << " ";
            cout << '\n';
        }
    }
    return 0;
}