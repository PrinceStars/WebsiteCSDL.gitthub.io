#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int count(int arr[], int n)
{
    int count = 0, k = arr[n - 1] - arr[0];
    vector<int> uoc;
    for (int i = 1; i * i <= k; i++)
    {
        if (k % i == 0)
        {
            uoc.push_back(i);
            if (k / i != i)
                uoc.push_back(k / i);
        }
    }

    for (auto i : uoc)
    {
        int mod = arr[0] % i, j = 1;
        while (j < n && arr[j] % i == mod)
            j++;
        if (j == n)
            count++;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        cout << count(arr, n) << endl;
    }
    return 0;
}