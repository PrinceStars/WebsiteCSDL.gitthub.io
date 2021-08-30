#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        unordered_map<long long, int> Umap1;
        unordered_map<long long, int> Umap2;
        vector<long long> res;
        long long x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            Umap1[x] = 1;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            if (Umap1[x] > 0)
            {
                Umap2[x]++;
                Umap1[x]--;
            }
        }
        for (int i = 0; i < k; i++)
        {
            cin >> x;
            if (Umap2[x] > 0)
            {
                Umap2[x]--;
                res.push_back(x);
            }
        }
        if (res.size())
        {
            for (auto i : res)
                cout << i << ' ';
            cout << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}