#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
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
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i].first;
        for (int i = 0; i < n; i++)
            cin >> arr[i].second;
        sort(arr.begin(), arr.end(), cmp);

        int result = 1, finish = 0;
        for (int i = 1; i < n; i++)
            if (arr[i].first >= arr[finish].second)
            {
                finish = i;
                result++;
            }
        cout << result << '\n';
    }
    return 0;
}