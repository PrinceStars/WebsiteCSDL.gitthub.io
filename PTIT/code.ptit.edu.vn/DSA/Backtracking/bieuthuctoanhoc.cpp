#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int arr[5];
bool res;
bool used[5];

void solve(int i, int sum)
{
    // cout << i << '|' << sum << ' ';
    if (res)
        return;
    if (i == 5)
    {
        if (sum == 23)
            res = 1;
        return;
    }
    for (int j = 0; j < 5; j++)
        if (!used[j])
        {
            used[j] = 1;
            if (i > 0)
            {
                solve(i + 1, sum * arr[j]);
                solve(i + 1, sum - arr[j]);
            }
            solve(i + 1, sum + arr[j]);
            used[j] = 0;
        }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("../zinput.txt", "r", stdin);
    // freopen("../zoutput.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        res = 0;
        memset(used, 0, sizeof(used));
        for (int i = 0; i < 5; i++)
            cin >> arr[i];
        solve(0, 0);
        if (res)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}