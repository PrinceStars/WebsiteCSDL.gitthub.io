#include <bits/stdc++.h>
using namespace std;
int x;
bool cmp(int a, int b)
{
    return abs(x - a) < abs(x - b);
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
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        stable_sort(arr, arr + n, cmp);
        for (int i = 0; i < n; i++)
            cout << arr[i] << ' ';
        cout << '\n';
    }
    return 0;
}