#include <bits/stdc++.h>
using namespace std;

bool find(int arr[], int n, long sum)
{
    if (sum == 0)
        return true;
    if (n == 0 && sum != 0)
        return false;

    if (arr[n - 1] > sum)
        return find(arr, n - 1, sum);

    return find(arr, n - 1, sum - arr[n - 1]) || find(arr, n - 1, sum);
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
        int arr[n];
        long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr, arr + n);
        if (sum % 2)
            cout << "NO\n";
        else
        {
            if (find(arr, n, sum / 2))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}