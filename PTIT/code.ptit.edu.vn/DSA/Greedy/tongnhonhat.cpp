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
        sort(arr, arr + n);
        long long a = 0, b = 0, t = 1;
        for (int i = n - 1; i > 1; i -= 2)
        {
            a = arr[i] * t + a;
            b = arr[i - 1] * t + b;
            t *= 10;
        }
        a = arr[0] * t + a;
        if (!(n % 2))
            b = arr[1] * t + b;
        cout << a + b << '\n';
    }
    return 0;
}