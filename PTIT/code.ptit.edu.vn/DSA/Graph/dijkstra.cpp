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
        int v, e, u;
        cin >> v >> e >> u;
        vector<pair<int, int>> adj[v + 1];
        for (int i = 1; i <= e; ++i)
        {
            int a, b, c;
            cin >> a >> b >> c;
            adj[a].push_back(make_pair(b, c));
            adj[b].push_back(make_pair(a, c));
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Pq;

        int res[v + 1] = {};
        for (int i = 1; i <= v; i++)
            res[i] = INT_MAX;

        res[u] = 0;
        Pq.push(make_pair(0, u));

        while (Pq.size())
        {
            pair<int, int> temp = Pq.top();
            Pq.pop();

            int vertex = temp.second;
            int weight = temp.first;
            // cout << vertex << " : ";
            for (auto i : adj[vertex])
            {
                if (i.second + weight < res[i.first])
                {
                    res[i.first] = i.second + weight;
                    Pq.push(make_pair(res[i.first], i.first));
                }
            }
        }
        for (int i = 1; i <= v; i++)
            cout << res[i] << ' ';
        cout << '\n';
    }
    return 0;
}
