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
        int n;
        cin >> n;
        pii arr[n];
        int DP[n] = {};
        for (int i = 0; i < n; i++)
            cin >> arr[i].first >> arr[i].second;
        int res = 0;
        sort(arr, arr + n);
        for (int i = 1; i < n; i++)
            for (int j = i - 1; j >= 0; j--)
                if (arr[i].first > arr[j].second)
                {
                    DP[i] = max(DP[i], DP[j] + 1);
                    res = max(res, DP[i]);
                }
        cout << res + 1 << '\n';
    }
    return 0;
}