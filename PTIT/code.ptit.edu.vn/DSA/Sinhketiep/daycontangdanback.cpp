#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
long res = 0;
int n, k;
int arr[100];

void solve(int i, int j)
{
    if (j == k)
        res++;
    for (int a = i + 1; a < n; a++)
        if (arr[a] >= arr[i])
            solve(a, j + 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - k + 1; i++)
        solve(i, 1);
    cout << res;
    return 0;
}