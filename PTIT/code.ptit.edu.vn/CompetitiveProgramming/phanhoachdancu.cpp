#include <bits/stdc++.h>
using namespace std;

#define ll long long

double solve(int arr[], int s1, int s2, int n)
{
    double averages1 = 0, averages2 = 0;
    if (s1 > s2)
        swap(s1, s2);
    int i = n - 1;
    for (int j = 0; j < s1 && i >= 0; j++)
        averages1 += arr[i--];
    for (int j = 0; j < s2 && i >= 0; j++)
        averages2 += arr[i--];
    averages1 /= s1;
    averages2 /= s2;
    return averages1 + averages2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        cout << fixed << setprecision(6) << solve(arr, c, d, n) << '\n';
    }
    return 0;
}