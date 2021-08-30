#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("zinput.txt", "r", stdin);
    // freopen("zoutput.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long MinL[n], MaxR[n];
        MinL[0] = arr[0], MaxR[n - 1] = arr[n - 1];
        for (int i = 1; i < n; i++)
            MinL[i] = min(MinL[i - 1], arr[i]);
        for (int i = n - 2; i >= 0; i--)
            MaxR[i] = max(MaxR[i + 1], arr[i]);

        int i = 0, j = 0, res = -1;
        while (j < n && i < n)
        {
            if (MinL[i] < MaxR[j])
            {
                res = max(res, j - i);
                j = j + 1;
            }
            else
                i = i + 1;
        }
        cout << res << '\n';
    }
}