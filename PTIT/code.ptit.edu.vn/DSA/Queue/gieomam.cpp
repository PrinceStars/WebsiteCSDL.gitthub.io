#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        int arr[r][c];
        queue<pair<int, int>> Q;
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 1)
                    Q.push({i, j});
            }
        int day = 0;
        while (!Q.empty())
        {
            pair<int, int> u = Q.front();
            Q.pop();
            int i = u.first, j = u.second;
        }
    }
    return 0;
}