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
        string a;
        cin >> a;
        int len = a.length() - 1, i = len;
        while (a[i - 1] >= a[i])
            --i;

        if (i == 0)
            cout << n << " BIGGEST\n";
        else
        {
            int j = len;
            while (a[j] <= a[i - 1])
                j--;
            swap(a[j], a[i - 1]);
            j = len;
            while (i < j)
                swap(a[i++], a[j--]);
            cout << n << ' ';
            cout << a << '\n';
        }
    }
    return 0;
}