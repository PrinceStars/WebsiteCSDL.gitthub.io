#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
int n, m, u;
vector<int> adj[1001];
vector<pii> res;
// int father[1001];
bool visited[1001];

void BFS(int u)
{
    queue<int> Queue;
    Queue.push(u);
    visited[u] = 1;
    while (Queue.size())
    {
        int temp = Queue.front();
        Queue.pop();
        for (auto i : adj[temp])
        {
            if (!visited[i])
            {
                visited[i] = 1;
                Queue.push(i);
                res.push_back({temp, i});
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
        // memset(father, -1, sizeof(father));
        memset(visited, 0, sizeof(visited));
        res.clear();
        cin >> n >> m >> u;
        for (int i = 1; i <= n; i++)
            adj[i].clear();
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        BFS(u);

        if (res.size() == n - 1)
            for (auto i : res)
                cout << i.first << ' ' << i.second << '\n';
        else
            cout << "-1\n";
    }
    return 0;
}