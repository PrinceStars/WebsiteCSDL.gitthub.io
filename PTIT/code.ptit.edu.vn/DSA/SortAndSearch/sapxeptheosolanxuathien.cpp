#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second == b.second ? a.first < b.first : a.second > b.second;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        unordered_map<int, int> Umap;
        vector<pair<int, int>> arr;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            Umap[x]++;
        }
        for (auto i : Umap)
            arr.push_back({i.first, i.second});
        sort(arr.begin(), arr.end(), cmp);
        for (auto i : arr)
            while (i.second--)
                cout << i.first << ' ';
        cout << '\n';
    }
    return 0;
}