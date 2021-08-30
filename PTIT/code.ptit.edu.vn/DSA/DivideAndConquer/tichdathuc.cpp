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
        int m, n;
        cin >> m >> n;
        int arr1[m], arr2[n], res[m + n - 1] = {};
        for (int i = 0; i < m; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
            for (int j = 0; j < m; j++)
                res[i + j] += arr1[j] * arr2[i];
        }
        for (int i = 0; i < m + n - 1; i++)
            cout << res[i] << ' ';
        cout << '\n';
    }
    return 0;
}