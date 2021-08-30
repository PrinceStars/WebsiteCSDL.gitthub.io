#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        long x;
        cin >> n >> m >> k;

        map<long, int> arr1, arr2;
        vector<long> res;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr1[x]++;
        }

        for (int i = 0; i < m; i++)
        {
            cin >> x;
            if (arr1[x] > 0)
            {
                arr2[x]++;
                arr1[x]--;
            }
        }

        for (int i = 0; i < k; i++)
        {
            cin >> x;
            if (arr2[x] > 0)
            {
                arr2[x]--;
                res.push_back(x);
            }
        }
        if (res.empty())
            cout << "NO" << endl;
        else
        {
            for (auto i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}