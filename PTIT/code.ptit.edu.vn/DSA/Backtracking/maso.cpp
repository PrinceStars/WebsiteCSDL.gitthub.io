#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
int n;
bool kytu[6];

void solve2(string str, int k)
{
    if (k == n)
    {
        cout << str << '\n';
        return;
    }
    for (int j = 1; j <= n; j++)
    {
        solve2(str + char(j + 48), k + 1);
    }
}

void solve(string str, int i)
{
    if (i == n)
    {
        solve2(str, 0);
        return;
    }
    for (int j = 0; j < n; j++)
    {
        if (!kytu[j])
        {
            kytu[j] = 1;
            solve(str + char('A' + j), i + 1);
            kytu[j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    solve("", 0);
    return 0;
}