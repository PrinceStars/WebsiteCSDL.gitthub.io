#include <bits/stdc++.h>
using namespace std;

bool check(int arr[], int n)
{
    int l = 0, r = n - 1;
    int d = n / 2;
    int maxL = min(arr[0], arr[n - 1]), minR = max(arr[0], arr[n - 1]);
    while (l <= d)
    {
        if (arr[l] > arr[r])
            swap(arr[l], arr[r]);
        if (maxL <= arr[l] && minR >= arr[r])
            maxL = arr[l], minR = arr[r];
        else
            return 0;
        l++, r--;
    }
    return 1;
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
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (check(arr, n))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}