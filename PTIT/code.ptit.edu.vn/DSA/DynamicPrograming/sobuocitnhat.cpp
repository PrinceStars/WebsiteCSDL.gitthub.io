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
        int n;
        cin >> n;
        int arr[n], arr2[n] = {};
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int res = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = i - 1; j >= 0; j--)
                if (arr[i] >= arr[j])
                    arr2[i] = max(arr2[i], arr2[j] + 1);
            res = max(res, arr2[i]);
        }
        cout << n - res - 1 << '\n';
    }
    return 0;
}