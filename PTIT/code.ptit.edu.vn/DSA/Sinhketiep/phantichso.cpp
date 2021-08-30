#include <bits/stdc++.h>
using namespace std;

int n, k, a[11] = {};
bool stop;

void print()
{
    for (int i = 1; i <= k; i++)
    {
        if (i == 1)
            cout << "(";
        cout << a[i];
        if (i < k)
            cout << ' ';
        else
            cout << ')';
    }
    cout << ' ';
}

void sinh()
{
    int i = k;
    while (i >= 0 && a[i] == 1)
        i--;
    if (i <= 0)
        stop = true;
    else
    {
        a[i] -= 1;
        int d = k - i + 1;
        k = i;
        for (int j = i + 1; j <= i + d / a[i]; j++)
            a[j] = a[i];
        k += d / a[i];
        if (d % a[i])
            a[++k] = d % a[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        memset(a, 0, sizeof(a));
        int n;
        cin >> n;
        stop = false;
        k = 1;
        a[k] = n;
        while (!stop)
        {
            print();
            sinh();
        }
        cout << '\n';
    }
    return 0;
}