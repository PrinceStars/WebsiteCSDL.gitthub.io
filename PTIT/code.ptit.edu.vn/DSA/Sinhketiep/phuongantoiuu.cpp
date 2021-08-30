#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
int n, w;
int weights[100], values[100], res[100] = {};
int fopt = 0;
string xopt = "";

void solve(string str, int i, int capacity, int value)
{
    if (i <= n)
    {
        if (value > fopt)
        {
            fopt = value;
            xopt = str;
        }
        if (capacity - weights[i] >= 0)
            solve(str + "1 ", i + 1, capacity - weights[i], value + values[i]);
        solve(str + "0 ", i + 1, capacity, value);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> w;
    for (int i = 0; i < n; i++)
        cin >> values[i];
    for (int i = 0; i < n; i++)
        cin >> weights[i];
    solve("", 0, w, 0);
    cout << fopt << '\n'
         << xopt;
    return 0;
}