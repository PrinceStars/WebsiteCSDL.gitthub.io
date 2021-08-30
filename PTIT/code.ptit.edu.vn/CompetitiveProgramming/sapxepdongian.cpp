#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n + 1] = {};
    int a;
    int max_value = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr[a] = arr[a - 1] + 1;
        max_value = max(max_value, arr[a]);
    }
    cout << n - max_value << '\n';
    return 0;
}