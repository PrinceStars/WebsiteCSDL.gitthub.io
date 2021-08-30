#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int i;
        cin >> n;
        long long arr[n + 1] = {};
        for (i = 1; i <= n; i++)
        {
            cin >> arr[i];
            arr[i] += arr[i - 1];
        }
        for (i = 1; i <= n; i++)
        {
            if (arr[i] == arr[n] - arr[i - 1])
            {
                cout << i << endl;
                break;
            }
        }
        if (i == n + 1)
            cout << "-1" << endl;
    }
    return 0;
}