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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int temp = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            temp += arr[i];

            res = max(res, temp);

            if (temp < 0)
                temp = 0;
        }
        cout << res << '\n';
    }
    return 0;
}