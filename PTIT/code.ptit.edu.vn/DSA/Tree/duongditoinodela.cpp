#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> adj[1001];
vector<string> res;

bool cmp(string a, string b)
{
    int num1 = 0, num2 = 0;
    int id1 = a.length() - 2, id2 = b.length() - 2;
    int temp = 1;
    while (isdigit(a[id1]))
    {
        num1 = (a[id1] - 48) * temp + num1;
        temp *= 10;
        id1--;
    }
    temp = 1;
    while (isdigit(b[id2]))
    {
        num2 = (b[id2] - 48) * temp + num2;
        temp *= 10;
        id2--;
    }
    return num1 < num2;
}

void solve()
{
    queue<pair<int, string>> BFS;
    BFS.push({1, "1 "});
    while (BFS.size())
    {
        pair<int, string> u = BFS.front();
        BFS.pop();
        if (!adj[u.first].size())
        {
            res.push_back(u.second);
            continue;
        }
        for (auto i : adj[u.first])
            BFS.push({i, u.second + to_string(i) + " "});
    }
}

void showresult()
{
    sort(res.begin(), res.end(), cmp);
    for (auto i : res)
        cout << i << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            adj[i].clear();
        res.clear();
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
        }
        solve();
        showresult();
    }
    return 0;
}