#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
int n;
int arr[1000000];
int res[1000000];

int find(int u, int i)
{
    if (res[i] == 0)
        return i;
    if (res[i] != 0 && u < res[i])
        return find(u, i * 2 + 1);
    if (res[i] != 0 && u > res[i])
        return find(u, i * 2 + 2);
}

void printresult(int i)
{
    if (res[i] != 0 && res[i * 2 + 1] == 0 && res[i * 2 + 2] == 0)
        cout << res[i] << ' ';
    if (res[i * 2 + 1] != 0)
        printresult(i * 2 + 1);
    if (res[i * 2 + 2] != 0)
        printresult(i * 2 + 2);
}
void solve(int n)
{
    res[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        int j = find(arr[i], 0);
        res[j] = arr[i];
    }
    printresult(0);
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        memset(res, 0, sizeof(res));
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        solve(n);
    }
    return 0;
}