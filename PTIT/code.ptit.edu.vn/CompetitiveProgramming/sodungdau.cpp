#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        vector<int> res;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int max = arr[n - 1] - 1;
        for (int i = n - 1; i >= 0; i--)
            if (arr[i] > max)
            {
                res.push_back(arr[i]);
                max = arr[i];
            }
        for (auto i = res.rbegin(); i != res.rend(); i++)
            cout << *i << " ";
        cout << endl;
    }
    return 0;
}