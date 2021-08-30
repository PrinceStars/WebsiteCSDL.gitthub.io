#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n], b[n] = {};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        int temp = 0;
        for (int j = i - 1; j >= 0; j--)
            if (a[i] > a[j])
                temp = max(temp, b[j]);
        b[i] = temp + 1;
        res = max(res, b[i]);
    }

    cout << res + 1;
}