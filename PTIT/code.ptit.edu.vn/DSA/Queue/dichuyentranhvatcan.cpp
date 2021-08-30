#include <bits/stdc++.h>
using namespace std;

struct data
{
    int x;
    int y;
};
int step[100][100];

int find(char arr[100][100], int n)
{
    int sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey;
    queue<data> Q;
    Q.push({sx, sy});
    step[sx][sy] = 0;
    while (!Q.empty())
    {
        data u = Q.front();
        Q.pop();
        int i = u.x, j = u.y;
        if (i < n - 1 && step[i + 1][j] == -1 && arr[i + 1][j] == '.')
        {
            int k = i + 1;
            while (k < n && step[k][j] == -1 && arr[k][j] == '.')
            {
                if (step[k][j] == -1)
                    step[k][j] = step[i][j] + 1;
                if (k == ex && j == ey)
                    return step[ex][ey];
                if ((j < n - 1 && step[k][j + 1] == -1 && arr[k][j + 1] == '.') || (j > 0 && step[k][j - 1] == -1 && arr[k][j - 1] == '.'))
                    Q.push({k, j});
                k++;
            }
        }
        if (i > 0 && step[i - 1][j] == -1 && arr[i - 1][j] == '.')
        {
            int k = i - 1;
            while (k >= 0 && step[k][j] == -1 && arr[k][j] == '.')
            {
                if (step[k][j] == -1)
                    step[k][j] = step[i][j] + 1;
                if (k == ex && j == ey)
                    return step[ex][ey];
                if ((j < n - 1 && step[k][j + 1] == -1 && arr[k][j + 1] == '.') || (j > 0 && step[k][j - 1] == -1 && arr[k][j - 1] == '.'))
                    Q.push({k, j});
                k--;
            }
        }
        if (j < n - 1 && step[i][j + 1] == -1 && arr[i][j + 1] == '.')
        {
            int k = j + 1;
            while (k < n && step[i][k] == -1 && arr[i][k] == '.')
            {
                if (step[i][k] == -1)
                    step[i][k] = step[i][j] + 1;
                if (k == ey && i == ex)
                    return step[ex][ey];
                if ((i < n - 1 && step[i + 1][k] == -1 && arr[i + 1][k] == '.') || (i > 0 && step[i - 1][k] == -1 && arr[i - 1][k] == '.'))
                    Q.push({i, k});
                k++;
            }
        }
        if (j > 0 && step[i][j - 1] == -1 && arr[i][j - 1] == '.')
        {
            int k = j - 1;
            while (k >= 0 && step[i][k] == -1 && arr[i][k] == '.')
            {
                if (step[i][k] == -1)
                    step[i][k] = step[i][j] + 1;
                if (k == ey && i == ex)
                    return step[ex][ey];
                if ((i < n - 1 && step[i + 1][k] == -1 && arr[i + 1][k] == '.') || (i > 0 && step[i - 1][k] == -1 && arr[i - 1][k] == '.'))
                    Q.push({i, k});
                k--;
            }
        }
    }
    return step[ex][ey];
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
        char arr[100][100];
        memset(step, -1, sizeof(step));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];
        cout << find(arr, n) << '\n';
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //         cout << step[i][j] << '\t';
        //     cout << '\n';
        // }
    }
    return 0;
}
