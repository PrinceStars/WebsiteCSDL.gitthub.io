#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i = n - 1;
        while (i - 1 >= 0 && a[i] < a[i - 1])
            i--;
        i--;
        int k = i + 1;
        if (i == -1)
            i = 0;
        else
        {
            while (k < n && a[k] > a[i])
                k++;
            k--;
            swap(a[k], a[i]);
            i++;
        }
        k = n - 1;
        while (i < k)
            swap(a[i++], a[k--]);
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}