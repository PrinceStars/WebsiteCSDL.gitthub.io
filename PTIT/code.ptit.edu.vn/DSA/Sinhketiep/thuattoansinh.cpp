#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int n;
vector<int> Vec;

void print(bool check)
{
    if (check)
    {
        int i = 0;
        while (i < Vec.size())
            cout << Vec[i++] << ' ';
        i -= 2;
        while (i >= 0)
            cout << Vec[i--] << ' ';
        cout << '\n';
    }
    else
    {
        int i = 0;
        while (i < Vec.size())
            cout << Vec[i++] << ' ';
        i--;
        while (i >= 0)
            cout << Vec[i--] << ' ';
        cout << '\n';
    }
}

void solve(int m)
{
    if (m == 0)
    {
        print(n % 2);
        return;
    }
    for (int i = 0; i <= 1; i++)
    {
        Vec.push_back(i);
        solve(m - 1);
        Vec.pop_back();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    solve((n + 1) / 2);
    return 0;
}