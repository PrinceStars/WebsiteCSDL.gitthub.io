#include <bits/stdc++.h>
using namespace std;
bool found = 0;
void move(bool arr[10][10], string s, int x, int y, int dest)
{
    if (x == dest && y == dest)
    {
        found = 1;
        cout << s << ' ';
    }
    if (x + 1 <= dest && arr[x + 1][y])
        move(arr, s + 'D', x + 1, y, dest);
    if (y + 1 <= dest && arr[x][y + 1])
        move(arr, s + 'R', x, y + 1, dest);
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
        int n;
        cin >> n;
        bool arr[10][10];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];
        if (arr[0][0] != 1)
            cout << "-1\n";
        else
        {
            move(arr, "", 0, 0, n - 1);
            if (!found)
                cout << "-1\n";
            else
                cout << '\n';
        }
    }
    return 0;
}