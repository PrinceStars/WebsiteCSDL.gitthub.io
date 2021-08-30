#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int i1 = 0, i2 = 0, i3 = 0;
        long long arr1[n], arr2[m], arr3[k];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];
        for (int i = 0; i < n; i++)
            cin >> arr3[i];
        bool check = 0;
        while (i1 < n && i2 < m && i3 < k)
        {
            int Min = min(arr1[i1], min(arr2[i2], arr3[i3]));
            if (arr1[i1] == Min && arr2[i2] == Min && arr3[i3] == Min)
            {
                cout << Min << ' ';
                i1++, i2++, i3++;
                check = 1;
            }
            else
            {
                if (Min == arr1[i1])
                    i1++;
                if (Min == arr2[i2])
                    i2++;
                if (Min == arr3[i3])
                    i3++;
            }
        }
        if (!check)
            cout << "-1\n";
        else
            cout << '\n';
    }
    return 0;
}