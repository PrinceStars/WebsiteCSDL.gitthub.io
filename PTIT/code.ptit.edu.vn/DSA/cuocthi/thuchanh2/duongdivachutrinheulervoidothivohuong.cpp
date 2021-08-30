#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

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
        int odd_deg = 0;
        for (int i = 1; i <= v; i++)
            if (adj[i].size() % 2)
                odd_deg++;
        if (odd_deg > 2)
            cout << "0\n";
        else
            cout << (odd_deg ? "1\n" : "2\n");
    }
    return 0;
}