#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
int n;
vector<int> adj[10001];

void solve(int u)
{
    queue<int> Q;
    Q.push(u);
    while (Q.size())
    {
        int temp = Q.front();
        Q.pop();
        cout << temp << ' ';
        for (auto i : adj[temp])
            Q.push(i);
    }
    cout << '\n';
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
        solve(nodegoc);
    }
    return 0;
}