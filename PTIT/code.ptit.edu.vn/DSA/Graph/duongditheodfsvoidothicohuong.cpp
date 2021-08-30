#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
bool visited[1001];
int before[1001];

void DFS(int start, int destination)
{
    if (visited[destination])
        return;
    visited[start] = 1;
    for (auto i : adj[start])
        if (!visited[i])
        {
            before[i] = start;
            DFS(i, destination);
        }
}

void printResult(int start, int dest)
{
    if (!before[dest])
    {
        cout << "-1\n";
        return;
    }
    vector<int> res;
    while (dest != start)
    {
        res.push_back(dest);
        dest = before[dest];
    }
    res.push_back(start);
    reverse(res.begin(), res.end());
    for (auto i : res)
        cout << i << ' ';
    cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        memset(visited, 0, sizeof(visited));
        memset(before, 0, sizeof(before));
        int v, e, s, t;
        cin >> v >> e >> s >> t;
        for (int i = 1; i <= v; i++)
            adj[i].clear();
        for (int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }

        for (int i = 1; i <= v; i++)
            sort(adj[i].begin(), adj[i].end());

        DFS(s, t);
        printResult(s, t);
    }

    return 0;
}