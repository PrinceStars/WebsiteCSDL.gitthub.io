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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        b[0] = a[0];
        for (int i = 1; i < n; i++)
            b[i] = max(b[i - 1], a[i]);

        for (int i = n - 2; i >= 0; i--)
            a[i] = min(a[i + 1], a[i]);
        int L = 0, R = n - 1;
        while (a[L] == b[L])
            L++;
        while (a[R] == b[R])
            R--;
        cout << L + 1 << ' ' << R + 1 << '\n';
    }
    return 0;
}