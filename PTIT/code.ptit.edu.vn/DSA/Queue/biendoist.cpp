#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int s, t;
        cin >> s >> t;
        queue<pair<int, int>> Q;
        set<int> Set;
        Q.push({s, 0});
        while (!Q.empty())
        {
            int u = Q.front().first;
            int x = Q.front().second;
            Q.pop();
            if (u * 2 == t || u - 1 == t)
            {
                cout << x + 1 << '\n';
                break;
            }
            if (u < t && Set.find(u * 2) == Set.end())
            {
                Q.push({u * 2, x + 1});
                Set.insert(u * 2);
            }
            if (u - 1 > 0 && Set.find(u - 1) == Set.end())
            {
                Q.push({u - 1, x + 1});
                Set.insert(u - 1);
            }
        }
    }
    return 0;
}