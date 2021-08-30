#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long arr[n];
        priority_queue<pair<long, int>> ds;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < k; i++)
            ds.push({arr[i], i});
        cout << ds.top().first << " ";
        for (int i = k; i < n; i++)
        {
            ds.push({arr[i], i});
            while (!ds.empty() && ds.top().second < i - k + 1)
                ds.pop();
            cout << ds.top().first << " ";
        }
        cout << endl;
    }
    return 0;
}