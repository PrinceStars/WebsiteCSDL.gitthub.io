#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define pii pair<int, int>

int n;
int Cmin = INT_MAX;
int arr[16][16];
int before[16] = {0, 1};
bool visited[16] = {};
int cost = 0;
int res = INT_MAX;

void Solve(int k)
{
    for (int i = 2; i <= n; i++)
    {
        if (!visited[i])
        {
            before[k] = i;
            visited[i] = 1;
            cost += arr[before[k - 1]][before[k]];
            // cout << cost << ' ' << k << '?';
            if (k == n)
            {
                res = min(res, cost + arr[before[k]][1]);
                // cout << res << ' ';
            }
            else if (cost + (n - k + 1) * Cmin < res)
            {
                // cout << '\n';
                Solve(k + 1);
            }
            visited[i] = 0;
            cost -= arr[before[k - 1]][before[k]];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
        {
            cin >> arr[i][j];
            if (Cmin < arr[i][j])
                Cmin = arr[i][j];
        }
    Solve(2);
    cout << res << '\n';
    return 0;
}