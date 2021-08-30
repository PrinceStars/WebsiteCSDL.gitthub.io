#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        bool arr[n][m];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];

        int res = 0;
        for (int i = 0; i < n; i++)
            for (int j = i; j < n; j++)
            {
                int count = 0;
                for (int k = 0; k < m; k++)
                {
                    bool check = 1;
                    for (int c = i; c <= j; c++)
                        if (!arr[c][k])
                        {
                            check = 0;
                            break;
                        }
                    if (check)
                        count++;
                }
                res = max(res, count * (j - i + 1));
            }
        cout << res << endl;
    }
    return 0;
}