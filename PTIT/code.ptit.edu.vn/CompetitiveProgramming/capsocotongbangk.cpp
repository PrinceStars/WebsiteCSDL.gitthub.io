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
        unordered_map<long, int> umap;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            umap[arr[i]]++;
        }
        long long res = 0;
        for (int i = 0; i < n; i++)
        {
            if (umap[k - arr[i]] > 0)
            {
                if (k - arr[i] == arr[i])
                    res += umap[arr[i]] - 1;
                else
                    res += umap[k - arr[i]];
                umap[arr[i]]--;
            }
        }
        cout << res << "\n";
    }
    return 0;
}