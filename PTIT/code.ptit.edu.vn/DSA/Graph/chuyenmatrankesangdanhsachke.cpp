#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int matrix[n][n];
    vector<int> adj[n + 1];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j])
                adj[i + 1].push_back(j + 1);
        }
    for (int i = 1; i <= n; i++)
    {
        for (auto j : adj[i])
            cout << j << ' ';
        cout << '\n';
    }
    return 0;
}