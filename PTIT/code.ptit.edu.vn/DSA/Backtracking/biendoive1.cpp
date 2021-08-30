#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

unordered_set<int> NumberExist;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        NumberExist.clear();
        int n;
        cin >> n;
        queue<pii> Q;
        Q.push({n, 0});
        while (Q.size())
        {
            pii u = Q.front();
            int num = u.first, time = u.second;
            // cout << num << ' ';
            Q.pop();
            if (num % 3 == 0 && NumberExist.find(num / 3) == NumberExist.end())
            {
                NumberExist.insert(num / 3);
                Q.push({num / 3, time + 1});
            }
            if (num % 2 == 0 && NumberExist.find(num / 2) == NumberExist.end())
            {
                NumberExist.insert(num / 2);
                Q.push({num / 2, time + 1});
            }
            if (num > 1 && NumberExist.find(num - 1) == NumberExist.end())
            {
                NumberExist.insert(num - 1);
                Q.push({num - 1, time + 1});
            }
            if (NumberExist.find(1) != NumberExist.end())
            {
                cout << time + 1 << '\n';
                break;
            }
        }
    }
    return 0;
}