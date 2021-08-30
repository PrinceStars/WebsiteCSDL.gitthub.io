#include <bits/stdc++.h>
using namespace std;
long long arr[30];
bool found = 0;
int res = 0;
void find(int count, int i, long long s)
{
    if (!found && i >= 0)
    {
        if (s == 0)
        {
            found = 1;
            res = count;
            return;
        }
        if (arr[i] <= s)
        {
            find(count + 1, i - 1, s - arr[i]);
            find(count, i - 1, s);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    find(0, n - 1, s);
    if (found)
        cout << res << '\n';
    else
        cout << "-1\n";

    return 0;
}