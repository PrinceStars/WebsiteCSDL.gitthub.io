#include <bits/stdc++.h>
using namespace std;
int v, e, u;
vector<pair<int, int>> adj[101];
int res[101][101] = {};

void solve(int x)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Pq;

    for (int i = 1; i <= v; i++)
        res[x][i] = INT_MAX;

    res[x][x] = 0;
    Pq.push(make_pair(0, x));

    while (Pq.size())
    {
        pair<int, int> temp = Pq.top();
        Pq.pop();

        int vertex = temp.second;
        int weight = temp.first;
        // cout << vertex << " : ";
        for (auto i : adj[vertex])
        {
            if (i.second + weight < res[x][i.first])
            {
                res[x][i.first] = i.second + weight;
                Pq.push(make_pair(res[x][i.first], i.first));
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> v >> e;
    for (int i = 1; i <= e; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back(make_pair(b, c));
        adj[b].push_back(make_pair(a, c));
    }
    int q;
    cin >> q;
    for (int i = 1; i <= v; i++)
        solve(i);
    for (int i = 1; i <= q; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << res[x][y] << '\n';
    }

    return 0;
}
