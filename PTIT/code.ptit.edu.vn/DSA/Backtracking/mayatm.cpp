#include <bits/stdc++.h>
using namespace std;
bool found = 0;
int res;

void Find(int arr[], int start, int end, int size, int s)
{
    if (found || end < 0)
        return;
    if (s == 0)
    {
        found = 1;
        res = min(res, size);
    }
    for (int i = end; i >= start; i--)
        if (arr[i] <= s)
            Find(arr, start, i - 1, size + 1, s - arr[i]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        found = 0;
        res = INT_MAX;
        int n, s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        Find(arr, 0, n - 1, 0, s);
        if (!found)
            cout << "-1";
        else
            cout << res;
        cout << '\n';
    }
    return 0;
}