#include <bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> adj[1001];

void BFS(int u)
{
    queue<int> Q;
    Q.push(u);
    // cout << u << ' ';
    while (Q.size())
    {
        int temp = Q.front();
        Q.pop();
        visited[temp] = 1;

        for (auto i : adj[temp])
            if (!visited[i])
                Q.push(i);
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
        memset(visited, 0, sizeof(visited));
        for (int i = 1; i <= 1000; i++)
            adj[i].clear();
        int v, e;
        cin >> v >> e;
        for (int i = 0; i < e; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        int sothanhphanlienthonghientai = 0;
        for (int i = 1; i <= v; i++)
        {
            if (!visited[i])
            {
                sothanhphanlienthonghientai++;
                BFS(i);
            }
        }
        for (int i = 1; i <= v; i++)
        {
            memset(visited, 0, sizeof(visited));
            visited[i] = 1;
            int sothanhphanlienthongmoi = 0;
            for (int j = 1; j <= v; j++)
            {
                if (!visited[j])
                {
                    sothanhphanlienthongmoi++;
                    BFS(j);
                }
            }
            if (sothanhphanlienthongmoi > sothanhphanlienthonghientai)
                cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}