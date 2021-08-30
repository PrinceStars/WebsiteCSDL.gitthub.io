#include <bits/stdc++.h>
using namespace std;

void mergeSort(int arr[], int l, int r)
{
    if (l >= r)
        return;
    int m = (l + r) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    int s1 = m - l + 1, s2 = r - m;
    int L[s1], R[s2];

    for (int i = 0; i < s1; i++)
        L[i] = arr[i + l];
    for (int i = 0; i < s2; i++)
        R[i] = arr[i + m + 1];

    int i = 0, j = 0, k = l;
    while (i < s1 && j < s2)
        L[i] < R[j] ? arr[k++] = L[i++] : arr[k++] = R[j++];

    while (i < s1)
        arr[k++] = L[i++];
    while (j < s2)
        arr[k++] = R[j++];
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
        mergeSort(arr, 0, n - 1);
        for (int i = 0; i < n; i++)
            cout << arr[i] << ' ';
        cout << '\n';
    }
    return 0;
}