#include <bits/stdc++.h>
using namespace std;
int res = 0;
bool check1[15] = {}, check2[15] = {}, col[15] = {};
int arr[8][8];
void count(int i, int sum)
{
    if (i == 8)
    {
        res = max(res, sum);
        return;
    }
    for (int j = 0; j < 8; j++)
    {
        if (!col[j] && !check1[i + j] && !check2[i - j + 8 - 1])
        {
            col[j] = 1;
            check1[i + j] = 1;
            check2[i - j + 8 - 1] = 1;
            count(i + 1, sum + arr[i][j]);
            col[j] = 0;
            check1[i + j] = 0;
            check2[i - j + 8 - 1] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        res = 0;
        memset(check1, 0, sizeof(check1));
        memset(check2, 0, sizeof(check2));
        memset(col, 0, sizeof(col));
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                cin >> arr[i][j];
        count(0, 0);
        cout << res << '\n';
    }
    return 0;
}