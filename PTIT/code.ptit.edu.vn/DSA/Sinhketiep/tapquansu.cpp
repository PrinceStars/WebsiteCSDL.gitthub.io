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
        int n, k;
        cin >> n >> k;
        int arr[k];
        unordered_map<int, bool> Umap;
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
            Umap[arr[i]] = 1;
        }
        int i = k - 1, min = arr[k - 1];
        while (arr[i] == n - k + i + 1)
            min = arr[i--];
        if (i == -1)
            cout << k << '\n';
        else
        {
            int j = i - 1;
            while (j >= 0)
                Umap[arr[j--]] = 0;

            arr[i]++;
            if (Umap[arr[i]])
                Umap[arr[i]] = 0;
            for (int j = i + 1; j < k; j++)
            {
                arr[j] = arr[j - 1] + 1;
                Umap[arr[j]] = 0;
            }
            // for (auto i : Umap)
            //     cout << i.first << '.' << i.second << ' ';
            int count = 0;
            for (auto i : Umap)
                if (i.second)
                    count++;
            cout << count << '\n';
        }
    }
    return 0;
}