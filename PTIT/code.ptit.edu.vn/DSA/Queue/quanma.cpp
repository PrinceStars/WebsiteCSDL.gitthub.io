#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

bool has[80] = {};
int sx, sy, ex, ey;

class data
{
public:
    int x;
    int y;
    int step;
};

bool check(pii a)
{
    return a.first >= 0 && a.first < 8 && a.second >= 0 && a.second < 8;
}

int tonum(pii a)
{
    return a.first * 10 + a.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string st, en;
        cin >> st >> en;
        sx = st[0] - 'a', sy = st[1] - '1';
        ex = en[0] - 'a', ey = en[1] - '1';
        memset(has, 0, sizeof(has));
        queue<data> Q;
        Q.push({sx, sy});
        while (Q.size())
        {
            data u = Q.front();
            Q.pop();
            int x = u.x, y = u.y, t = u.step;
            // cout << x << ' ' << y << ' ' << t << "| ";
            if (u.x == ex && u.y == ey)
            {
                cout << t << '\n';
                break;
            }
            pii a1 = {x + 2, y - 1}, a2 = {x + 2, y + 1}, a3 = {x - 2, y - 1}, a4 = {x - 2, y + 1};
            pii a5 = {x + 1, y - 2}, a6 = {x + 1, y + 2}, a7 = {x - 1, y - 2}, a8 = {x - 1, y + 2};

            if (!has[tonum(a1)] && check(a1))
                has[tonum(a1)] = 1, Q.push({a1.first, a1.second, t + 1});
            if (!has[tonum(a2)] && check(a2))
                has[tonum(a2)] = 1, Q.push({a2.first, a2.second, t + 1});
            if (!has[tonum(a3)] && check(a3))
                has[tonum(a3)] = 1, Q.push({a3.first, a3.second, t + 1});
            if (!has[tonum(a4)] && check(a4))
                has[tonum(a4)] = 1, Q.push({a4.first, a4.second, t + 1});

            if (!has[tonum(a5)] && check(a5))
                has[tonum(a5)] = 1, Q.push({a5.first, a5.second, t + 1});
            if (!has[tonum(a6)] && check(a6))
                has[tonum(a6)] = 1, Q.push({a6.first, a6.second, t + 1});
            if (!has[tonum(a7)] && check(a7))
                has[tonum(a7)] = 1, Q.push({a7.first, a7.second, t + 1});
            if (!has[tonum(a8)] && check(a8))
                has[tonum(a8)] = 1, Q.push({a8.first, a8.second, t + 1});
        }
    }
    return 0;
}