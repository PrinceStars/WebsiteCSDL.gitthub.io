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
        int n, m;
        cin >> n >> m;
        long arr1[n], arr2[m];
        long Max = INT_MIN, Min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
            if (arr1[i] > Max)
                Max = arr1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
            if (arr2[i] < Min)
                Min = arr2[i];
        }
        long long res = Min * Max;
        cout << res << '\n';
    }
    return 0;
}