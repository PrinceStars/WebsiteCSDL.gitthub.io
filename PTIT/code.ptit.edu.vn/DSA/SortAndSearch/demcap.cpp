#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr1(n), arr2(m);
        int dem[4] = {};
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
            if (arr2[i] < 4)
                dem[arr2[i]]++;
        }
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        ll res = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] != 0)
            {
                if (arr1[i] == 1)
                    res += dem[0];
                else if (arr1[i] == 2)
                {
                    auto it = upper_bound(arr2.begin(), arr2.end(), 4);
                    res += dem[0] + dem[1] + (arr2.end() - it);
                }
                else if (arr1[i] == 3)
                {
                    auto it = upper_bound(arr2.begin(), arr2.end(), 3);
                    res += dem[0] + dem[1] + dem[2] + (arr2.end() - it);
                }
                else
                {
                    auto it = upper_bound(arr2.begin(), arr2.end(), arr1[i]);
                    res += dem[0] + dem[1] + (arr2.end() - it);
                }
            }
            // cout << res << ' ';
        }
        cout << res << '\n';
    }
    return 0;
}
