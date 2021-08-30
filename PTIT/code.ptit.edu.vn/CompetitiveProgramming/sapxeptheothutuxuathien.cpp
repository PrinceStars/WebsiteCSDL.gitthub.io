#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<long, pair<int, int>> a, pair<long, pair<int, int>> b)
{
    return a.second.first == b.second.first ? a.second.second < b.second.second : a.second.first > b.second.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long n, x;
        cin >> n;
        map<long, pair<int, int>> count;
        vector<pair<long, pair<int, int>>> res;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (count[x].first == 0)
                count[x].second = i;
            count[x].first++;
        }

        for (auto i : count)
            res.push_back({i.first, {i.second.first, i.second.second}});

        sort(res.begin(), res.end(), cmp);

        for (auto i : res)
            while (i.second.first--)
                cout << i.first << " ";
        cout << endl;
    }
    return 0;
}