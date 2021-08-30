#include <bits/stdc++.h>
using namespace std;

long findres(long a[], int size)
{
    long res = INT_MIN, temp = 0;

    for (int i = 0; i < size; i++)
    {
        temp = temp + a[i];
        if (res < temp)
            res = temp;

        if (temp < 0)
            temp = 0;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << findres(arr, n) << endl;
    }
    return 0;
}
