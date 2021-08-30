#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int x;
        int sum_row[n] = {}, sum_col[n] = {};

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> x;
                sum_col[j] = x;
                sum_row[i] = x;
            }

        int maxvl = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            maxvl = max(max(sum_row[i], sum_col[i]), maxvl);
            sum += sum_row[i];
        }

        cout << maxvl * n - sum << endl;
    }
    return 0;
}