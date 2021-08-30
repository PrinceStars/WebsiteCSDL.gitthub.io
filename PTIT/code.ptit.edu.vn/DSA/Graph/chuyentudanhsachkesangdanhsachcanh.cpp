#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();

    vector<int> adj[50];
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

    bool arr[50][50] = {};

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < adj[i].size(); j++)
            if (!arr[i][adj[i][j]] && !arr[adj[i][j]][i])
            {
                cout << i << " " << adj[i][j] << '\n';
                arr[i][adj[i][j]] = 1;
                arr[adj[i][j]][i] = 1;
            }
    }
    return 0;
}