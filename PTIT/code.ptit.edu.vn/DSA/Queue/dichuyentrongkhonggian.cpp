#include <bits/stdc++.h>
using namespace std;

struct data
{
    int z;
    int x;
    int y;
};

int step[30][30][30];
char arr[30][30][30];
int a, b, c;
int sx, sy, sz, ex, ey, ez;

bool haveneighbor(char c, int k, int i, int j)
{
    if (c == 'x')
        return (j < c - 1 && step[k][i][j + 1] == -1 && arr[k][i][j + 1] == '.') || (j > 0 && step[k][i][j - 1] == -1 && arr[k][i][j - 1] == '.') || (k < a - 1 && step[k + 1][i][j] == -1 && arr[k + 1][i][j] == '.') || (k > 0 && step[k - 1][i][j] == -1 && arr[k - 1][i][j] == '.');
    else if (c == 'y')
        return (i < b - 1 && step[k][i + 1][j] == -1 && arr[k][i + 1][j] == '.') || (i > 0 && step[k][i - 1][j] == -1 && arr[k][i - 1][j] == '.') || (k < a - 1 && step[k + 1][i][j] == -1 && arr[k + 1][i][j] == '.') || (k > 0 && step[k - 1][i][j] == -1 && arr[k - 1][i][j] == '.');
    else if (c == 'z')
        return (i < b - 1 && step[k][i + 1][j] == -1 && arr[k][i + 1][j] == '.') || (i > 0 && step[k][i - 1][j] == -1 && arr[k][i - 1][j] == '.') || (j < c - 1 && step[k][i][j + 1] == -1 && arr[k][i][j + 1] == '.') || (j > 0 && step[k][i][j - 1] == -1 && arr[k][i][j - 1] == '.');
}

int find(int a, int b, int c)
{
    queue<data> Q;
    Q.push({sz, sx, sy});
    step[sz][sx][sy] = 0;
    while (!Q.empty())
    {
        data u = Q.front();
        Q.pop();
        int k = u.z, i = u.x, j = u.y;
        // cout << k << '.' << i << '.' << j << '|';

        // find x
        if (i < b - 1 && arr[k][i + 1][j] == '.')
        {
            int t = i + 1;
            while (t < b && step[k][t][j] == -1 && arr[k][t][j] == '.')
            {
                step[k][t][j] = step[k][t - 1][j] + 1;
                if (k == ez && t == ex && j == ey)
                    return step[ez][ex][ey];
                if (haveneighbor('x', k, t, j))
                    Q.push({k, t, j});
                t++;
            }
        }
        if (i > 0 && arr[k][i - 1][j] == '.')
        {
            int t = i - 1;
            while (t >= 0 && step[k][t][j] == -1 && arr[k][t][j] == '.')
            {
                step[k][t][j] = step[k][t + 1][j] + 1;
                if (k == ez && t == ex && j == ey)
                    return step[ez][ex][ey];
                if (haveneighbor('x', k, t, j))
                    Q.push({k, t, j});
                t--;
            }
        }

        // find y
        if (j < c - 1 && arr[k][i][j + 1] == '.')
        {
            int t = j + 1;
            while (t < c && step[k][i][t] == -1 && arr[k][i][t] == '.')
            {
                step[k][i][t] = step[k][i][t - 1] + 1;
                if (k == ez && t == ey && i == ex)
                    return step[ez][ex][ey];
                if (haveneighbor('y', k, i, t))
                    Q.push({k, i, t});
                t++;
            }
        }
        if (j > 0 && arr[k][i][j - 1] == '.')
        {
            int t = j - 1;
            while (t >= 0 && step[k][i][t] == -1 && arr[k][i][t] == '.')
            {
                step[k][i][t] = step[k][i][t + 1] + 1;
                if (k == ez && t == ey && i == ex)
                    return step[ez][ex][ey];
                if (haveneighbor('y', k, i, t))
                    Q.push({k, i, t});
                t--;
            }
        }

        //find z
        if (k < a - 1 && step[k + 1][i][j] == -1 && arr[k + 1][i][j] == '.')
        {
            int t = k + 1;
            while (t < a && arr[t][i][j] == '.')
            {
                step[t][i][j] = step[t - 1][i][j] + 1;
                if (t == ez && i == ex && j == ey)
                    return step[ez][ex][ey];
                if (haveneighbor('z', t, i, j))
                    Q.push({t, i, j});
                t++;
            }
        }
        if (k > 0 && arr[k - 1][i][j] == '.')
        {
            int t = k - 1;
            while (t >= 0 && step[t][i][j] == -1 && arr[t][i][j] == '.')
            {
                step[t][i][j] = step[t + 1][i][j] + 1;
                if (t == ez && i == ex && j == ey)
                    return step[ez][ex][ey];
                if (haveneighbor('z', t, i, j))
                    Q.push({t, i, j});
                t--;
            }
        }
    }
    return step[ez][ex][ey];
}
int main()
{
    freopen("../zinput.txt", "r", stdin);
    freopen("../zoutput.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        memset(step, -1, sizeof(step));
        for (int k = 0; k < a; k++)
            for (int i = 0; i < b; i++)
                for (int j = 0; j < c; j++)
                {
                    cin >> arr[k][i][j];
                    if (arr[k][i][j] == 'S')
                        sz = k, sx = i, sy = j;
                    if (arr[k][i][j] == 'E')
                    {
                        arr[k][i][j] = '.';
                        ez = k, ex = i, ey = j;
                    }
                }
        if (sz == -1 || ez == -1)
            cout << "-1\n";
        else
            cout << find(a, b, c) << '\n';
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                    cout << arr[i][j][k] << '\t';
                cout << '\n';
            }
            cout << '\n';
        }

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                    cout << step[i][j][k] << '\t';
                cout << '\n';
            }
            cout << '\n';
        }
    }
    return 0;
}