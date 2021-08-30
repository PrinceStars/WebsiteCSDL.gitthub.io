#include <bits/stdc++.h>
using namespace std;

bool cmp(long a, long b)
{
    return abs(a) < abs(b);
}

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
        long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long res = arr[1] + arr[0];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(res) > abs(arr[i] + arr[j]))
                    res = arr[i] + arr[j];
            }
        }
        cout << res << '\n';
    }
    return 0;
}