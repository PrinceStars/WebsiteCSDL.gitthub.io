#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    vector<int> adj[1001];
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        s += " ";
        int num = 0;

        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] >= '0' && s[j] <= '9')
                num = num * 10 + s[j] - 48;
            else if (num > 0)
            {
                adj[i + 1].push_back(num);
                num = 0;
            }
        }
    }

    for (int i = 1; i <= n; i++)
        sort(adj[i].begin(), adj[i].end());

    bool matrix[1001][1001] = {};
    for (int i = 1; i <= n; i++)
        for (auto j : adj[i])
            matrix[i][j] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << matrix[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}