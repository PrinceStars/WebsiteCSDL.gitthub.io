#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

bool cmp(pii a, pii b)
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
        int n;
        cin >> n;
        unordered_map<int, int> count;
        vector<pii> res;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            count[x]++;
        }
        for (auto i : count)
        {
            res.push_back({i.first, i.second});
        }
        sort(res.begin(), res.end(), cmp);
        for (auto i : res)
            while (i.second--)
            {
                cout << i.first << ' ';
            }

        cout << '\n';
    }
    return 0;
}