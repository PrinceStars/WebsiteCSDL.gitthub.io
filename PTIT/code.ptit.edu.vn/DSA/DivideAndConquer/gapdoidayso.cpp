#include <bits/stdc++.h>
using namespace std;
long long arr[51] = {0, 1};
int find(int n, long long k)
{
    // cout << n << '.' << k << ' ';
    if (k == arr[n - 1] + 1)
        return n;
    return find(n - 1, k % (arr[n - 1] + 1));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 2; i <= 50; i++)
        arr[i] = arr[i - 1] * 2 + 1;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        cout << find(n, k) << '\n';
    }
    return 0;
}