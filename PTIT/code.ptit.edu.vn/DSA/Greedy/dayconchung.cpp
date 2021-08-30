#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        long arr1[n], arr2[m], arr3[k];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < m; i++)
            cin >> arr2[i];
        for (int i = 0; i < k; i++)
            cin >> arr3[i];
        int i1 = 0, i2 = 0, i3 = 0;
        bool check = 0;
        while (i1 < n && i2 < m && i3 < k)
        {
            long Min = min(arr1[i1], min(arr2[i2], arr3[i3]));
            // cout << arr1[i1] << ' ' << arr2[i2] << ' ' << arr3[i3] << ". ";
            if (arr1[i1] == Min && arr2[i2] == Min && arr3[i3] == Min)
            {
                check = 1;
                cout << Min << ' ';
                i1++, i2++, i3++;
            }
            else
            {
                if (arr1[i1] == Min)
                    i1++;
                if (arr2[i2] == Min)
                    i2++;
                if (arr3[i3] == Min)
                    i3++;
            }
        }
        if (check)
            cout << '\n';
        else
            cout << "NO\n";
    }
    return 0;
}