#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

long findsqrt(long n)
{
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        queue<pair<long, int>> Q;
        unordered_set<long> Set;
        Set.insert(n);
        Q.push({n, 0});
        while (Q.size())
        {
            pair<long, int> u = Q.front();
            long val = u.first;
            int step = u.second;
            Q.pop();
            long temp = sqrt(val);
            while (temp > 1)
            {
                if (val % temp == 0)
                {
                    long op1 = val / temp;
                    if (op1 == 1)
                        cout << step + 1 << '\n';
                    if (Set.find(op1) == Set.end())
                    {
                        Set.insert(op1);
                        Q.push({op1, step + 1});
                    }
                }
                temp--;
            }

            long op2 = val - 1;
            // cout << op1 << '|' << op2 << ',' << step << ' ';
            if (op2 == 1)
            {
                cout << step + 1 << '\n';
                break;
            }
            if (Set.find(op2) == Set.end())
            {
                Set.insert(op2);
                Q.push({op2, step + 1});
            }
        }
    }
    return 0;
}