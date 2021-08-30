#include <bits/stdc++.h>
using namespace std;

void find(long long arr[], int n)
{
    for (int i = n - 1; i >= 2; i--)
    {

        int l = 0;
        int r = i - 1;
        while (l < r)
        {
            if (arr[l] + arr[r] == arr[i])
            {
                cout << "YES" << endl;
                return;
            }
            (arr[l] + arr[r] < arr[i]) ? l++ : r--;
        }
    }
    cout << "NO" << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] *= arr[i];
        }
        sort(arr, arr + n);
        find(arr, n);
    }
    return 0;
}