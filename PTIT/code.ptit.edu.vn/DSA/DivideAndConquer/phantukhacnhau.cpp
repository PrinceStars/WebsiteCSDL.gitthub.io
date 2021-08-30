#include <bits/stdc++.h>
using namespace std;

int find(long long a[], long long b[], int n)
{
    for (int i = 0; i < n - 1; i++)
        if (a[i] != b[i])
            return i + 1;
    return n;
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
        long long arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n - 1; i++)
            cin >> arr2[i];
        cout << find(arr1, arr2, n) << '\n';
    }
    return 0;
}