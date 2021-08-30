#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        unordered_map<long, int> Umap;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            Umap[x]++;
        }
        if (Umap[k] == 0)
            cout << "-1\n";
        else
            cout << Umap[k] << '\n';
    }
    return 0;
}