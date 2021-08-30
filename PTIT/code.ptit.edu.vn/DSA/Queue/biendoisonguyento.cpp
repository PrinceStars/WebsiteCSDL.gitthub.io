#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

bool prime[10000] = {};

void preprocess()
{
    for (int i = 4; i < 10000; i += 2)
        prime[i] = 1;
    for (int i = 3; i * i < 10000; i += 2)
        for (int j = i * i; j < 10000; j += i)
            prime[j] = 1;
}

int S, T;
void solve()
{
    queue<pii> Q;
    unordered_set<int> Set;
    Set.insert(S);
    Q.push({S, 0});
    while (Q.size())
    {
        pii u = Q.front();
        Q.pop();

        int num = u.first, step = u.second;

        // op1
        int num1 = num / 10 * 10, so4 = num % 10;
        for (int i = 1; i <= 9; i += 2)
            if (!prime[num1 + i] && Set.find(num1 + i) == Set.end())
            {
                if (num1 + i == T)
                {
                    cout << step + 1 << '\n';
                    return;
                }
                else
                {
                    Q.push({num1 + i, step + 1});
                    Set.insert(num1 + i);
                }
            }
        // op2
        int num2 = num / 100 * 100 + so4, so3 = num % 100 - so4;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    preprocess();

    int t;
    cin >> t;
    while (t--)
    {
        cin >> S >> T;
        solve();
    }
    return 0;
}