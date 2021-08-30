#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first == b.first ? a.second < b.second : a.first > b.first;
}

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
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            arr.push_back({z, y});
        }
        sort(arr.begin(), arr.end(), cmp);
        int res = 0, count = 0;
        int marked[n] = {};
        for (int i = 0; i < n; i++)
        {
            for (int j = min(arr[i].second, n) - 1; j >= 0; j--)
                if (!marked[j])
                {
                    marked[j] = 1;
                    res += arr[i].first;
                    count++;
                    break;
                }
        }
        cout << count << ' ' << res << '\n';
    }
    return 0;
}