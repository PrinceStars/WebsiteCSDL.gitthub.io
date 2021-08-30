#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        long arr[n];
        map<long, int> M;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            M[arr[i]]++;
        }
        long long res = 0;
        for (int i = 0; i < n; i++)
        {
            if (M[k - arr[i]] > 0)
            {
                if (k - arr[i] == arr[i])
                    res += M[arr[i]] - 1;
                else
                    res += M[k - arr[i]];
                M[arr[i]]--;
            }
        }
        cout << res << "\n";
    }
    return 0;
}