#include <bits/stdc++.h>
using namespace std;
int a[1005][1005] = {};
int vs[1005], n, v;
void dfs(int i)
{
    for (int j = 1; j <= n; j++)
        if (a[i][j] == 1 && vs[j] == 0)
        {
            vs[j] = 1;
            a[i][j] = 0;
            a[j][i] = 0;
            dfs(j);
            a[i][j] = 1;
            a[j][i] = 1;
        }
}
string check()
{
    for (int i = 1; i <= n; i++)
    {
        memset(vs, 0, sizeof(vs));
        dfs(i);
        if (vs[i] == 1)
            return "YES";
    }
    return "NO";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> n >> v;
        for (int i = 0; i < v; i++)
        {
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        cout << check() << "\n";
    }

    return 0;
}