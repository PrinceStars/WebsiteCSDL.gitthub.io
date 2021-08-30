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
        long n, m;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < m; i++)
            cin >> arr2[i];
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (arr1[i] < arr2[j])
                cout << arr1[i++] << ' ';
            else if (arr1[i] > arr2[j])
                cout << arr2[j++] << ' ';
            else
                cout << arr1[i++] << ' ' << arr2[j++] << ' ';
        }
        while (i < n)
            cout << arr1[i++] << ' ';
        while (j < m)
            cout << arr2[j++] << ' ';
        cout << '\n';
    }
}