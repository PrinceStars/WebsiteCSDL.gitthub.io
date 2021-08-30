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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < k; i++)
            cin >> arr[i];
        int i = k - 1;
        while (arr[i] == n - k + 1 + i)
            i--;
        if (i == -1)
            arr[++i] = 1;
        else
            arr[i]++;
        for (int j = i + 1; j < k; j++)
            arr[j] = arr[j - 1] + 1;
        for (int i = 0; i < k; i++)
            cout << arr[i] << ' ';
        cout << '\n';
    }
    return 0;
}