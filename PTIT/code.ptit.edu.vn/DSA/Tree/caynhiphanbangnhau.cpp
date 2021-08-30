#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
int n;
vector<int> adj1[10001];
vector<int> adj2[10001];
bool haveresult = 0;

void solve(int u1, int u2)
{
    if (haveresult)
        return;
    if (adj1[u1].size() != adj2[u2].size())
    {
        haveresult = 1;
        cout << "0\n";
        return;
    }
    for (int i = 0; i < adj1[u1].size(); i++)
        if (adj1[u1][i] != adj2[u2][i])
        {
            haveresult = 1;
            cout << "0\n";
            return;
        }
    for (auto i : adj1[u1])
        solve(i, i);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        haveresult = 0;
        for (int i = 1; i <= 10000; i++)
            adj1[i].clear();
        for (int i = 1; i <= 10000; i++)
            adj2[i].clear();

        int a, b;
        char c;

        cin >> n;
        cin >> a >> b >> c;
        int root1 = a;
        if (c == 'R')
            adj1[a].push_back(b);
        else
            adj1[a].insert(adj1[a].begin(), b);
        for (int i = 1; i < n; i++)
        {
            cin >> a >> b >> c;
            if (c == 'R')
                adj1[a].push_back(b);
            else
                adj1[a].insert(adj1[a].begin(), b);
        }

        cin >> n;
        cin >> a >> b >> c;
        int root2 = a;
        if (c == 'R')
            adj2[a].push_back(b);
        else
            adj2[a].insert(adj2[a].begin(), b);
        for (int i = 1; i < n; i++)
        {
            cin >> a >> b >> c;
            if (c == 'R')
                adj2[a].push_back(b);
            else
                adj2[a].insert(adj2[a].begin(), b);
        }
        solve(root1, root2);
        if (haveresult == 0)
            cout << "1\n";
    }
    return 0;
}