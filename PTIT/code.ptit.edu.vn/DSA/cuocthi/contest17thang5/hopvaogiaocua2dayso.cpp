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
        int arr1[n], arr2[m];
        set<int> hop;
        map<int, int> giao;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            hop.insert(arr1[i]);
            giao[arr1[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
            hop.insert(arr2[i]);
            giao[arr2[i]]++;
        }
        for (auto i : hop)
            cout << i << ' ';
        cout << '\n';
        for (auto i : giao)
        {
            if (i.second == 2)
                cout << i.first << ' ';
        }
        cout << '\n';
    }
    return 0;
}