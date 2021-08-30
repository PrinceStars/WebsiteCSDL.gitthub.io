#include <bits/stdc++.h>
using namespace std;

long long count(long long arr[], int n, long long sum)
{
    long long ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] >= sum)
                k--;
            else
            {
                ans += (k - j);
                j++;
            }
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        cout << count(arr, n, k) << "\n";
    }
    return 0;
}