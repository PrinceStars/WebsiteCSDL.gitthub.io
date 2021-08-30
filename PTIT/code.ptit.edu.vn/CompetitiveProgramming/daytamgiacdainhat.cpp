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
        int inL[n] = {}, inR[n] = {};
        for (int i = 1; i < n; i++)
            if (arr[i] >= arr[i - 1])
                inL[i] = inL[i - 1] + 1;
        for (int i = n - 2; i >= 0; i--)
            if (arr[i] >= arr[i + 1])
                inR[i] = inR[i + 1] + 1;

        // print inL, inR
        // for (int i = 0; i < n; i++)
        //     cout << inL[i] << " ";
        // cout << endl;
        // for (int i = 0; i < n; i++)
        //     cout << inR[i] << " ";
        // cout << endl;

        int res = 0;
        for (int i = 0; i < n; i++)
            res = max(res, inL[i] + inR[i]);
        cout << res + 1 << '\n';
    }
}