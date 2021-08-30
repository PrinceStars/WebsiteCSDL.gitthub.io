#include <bits/stdc++.h>
using namespace std;

bool checkexist(long arr[], int n, int k)
{
    for (int i = 0; i < n && arr[i] <= k / 3; i++)
        for (int j = i + 1; j < n; j++)
            if (binary_search(arr + j + 1, arr + n, k - arr[i] - arr[j]))
                return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        if (checkexist(a, n, k))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}