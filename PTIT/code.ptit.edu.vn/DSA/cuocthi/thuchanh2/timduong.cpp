#include <bits/stdc++.h>
using namespace std;

struct pos
{
    int x;
    int y;
};

char arr[500][500];
int step[500][500];
int sx, sy, ex, ey;
int n, m;

bool find()
{
    queue<pos> Q;
    Q.push({sx, sy});
    step[sx][sy] = 0;
    while (!Q.empty())
    {
        pos u = Q.front();
        Q.pop();
        int i = u.x, j = u.y;
        if (i < n - 1 && step[i + 1][j] == -1 && arr[i + 1][j] == '.')
        {
            int k = i + 1;
            while (k < n && step[k][j] == -1 && arr[k][j] == '.')
            {
                step[k][j] = step[i][j];
                if (k == ex && j == ey)
                    return step[ex][ey] <= 2;
                if ((j < m - 1 && step[k][j + 1] == -1 && arr[k][j + 1] == '.') || (j > 0 && step[k][j - 1] == -1 && arr[k][j - 1] == '.'))
                {
                    step[k][j] = step[i][j] + 1;
                    Q.push({k, j});
                }
                k++;
            }
        }
        if (i > 0 && step[i - 1][j] == -1 && arr[i - 1][j] == '.')
        {
            int k = i - 1;
            while (k >= 0 && step[k][j] == -1 && arr[k][j] == '.')
            {
                step[k][j] = step[i][j];
                if (k == ex && j == ey)
                    return step[ex][ey] <= 2;
                if ((j < m - 1 && step[k][j + 1] == -1 && arr[k][j + 1] == '.') || (j > 0 && step[k][j - 1] == -1 && arr[k][j - 1] == '.'))
                {
                    step[k][j] = step[i][j] + 1;
                    Q.push({k, j});
                }
                k--;
            }
        }
        if (j < m - 1 && step[i][j + 1] == -1 && arr[i][j + 1] == '.')
        {
            int k = j + 1;
            while (k < m && step[i][k] == -1 && arr[i][k] == '.')
            {
                step[i][k] = step[i][j];
                if (k == ey && i == ex)
                    return step[ex][ey] <= 2;
                if ((i < n - 1 && step[i + 1][k] == -1 && arr[i + 1][k] == '.') || (i > 0 && step[i - 1][k] == -1 && arr[i - 1][k] == '.'))
                {
                    step[i][k] = step[i][j] + 1;
                    Q.push({i, k});
                }
                k++;
            }
        }
        if (j > 0 && step[i][j - 1] == -1 && arr[i][j - 1] == '.')
        {
            int k = j - 1;
            while (k >= 0 && step[i][k] == -1 && arr[i][k] == '.')
            {
                step[i][k] = step[i][j];
                if (k == ey && i == ex)
                    return step[ex][ey] <= 2;
                if ((i < n - 1 && step[i + 1][k] == -1 && arr[i + 1][k] == '.') || (i > 0 && step[i - 1][k] == -1 && arr[i - 1][k] == '.'))
                {
                    step[i][k] = step[i][j] + 1;
                    Q.push({i, k});
                }
                k--;
            }
        }
    }
    return step[ex][ey] != -1 ? step[ex][ey] <= 2 : 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        memset(step, -1, sizeof(step));
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'S')
                {
                    sx = i, sy = j;
                }
                if (arr[i][j] == 'T')
                {
                    arr[i][j] = '.';
                    ex = i, ey = j;
                }
            }
        }

        if (find())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}