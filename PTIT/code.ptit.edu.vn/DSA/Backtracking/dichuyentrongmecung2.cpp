#include <bits/stdc++.h>
using namespace std;
bool found = 0;
bool visited[11][11];
void move(bool arr[11][11], string s, int x, int y, int dest)
{
    if (x == dest && y == dest)
    {
        found = 1;
        cout << s << ' ';
    }
    visited[x][y] = 1;
    if (x != dest && arr[x + 1][y] && !visited[x + 1][y])
        move(arr, s + 'D', x + 1, y, dest);

    if (y != 1 && arr[x][y - 1] && !visited[x][y - 1])
        move(arr, s + 'L', x, y - 1, dest);

    if (y != dest && arr[x][y + 1] && !visited[x][y + 1])
        move(arr, s + 'R', x, y + 1, dest);

    if (x != 1 && arr[x - 1][y] && !visited[x - 1][y])
        move(arr, s + 'U', x - 1, y, dest);
    visited[x][y] = 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        found = 0;
        memset(visited, 0, sizeof(visited));
        int n;
        cin >> n;
        bool arr[11][11];

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> arr[i][j];

        if (!arr[1][1] || !arr[n][n])
            cout << "-1\n";
        else
        {
            move(arr, "", 1, 1, n);
            if (!found)
                cout << "-1\n";
            else
                cout << '\n';
        }
    }
    return 0;
}