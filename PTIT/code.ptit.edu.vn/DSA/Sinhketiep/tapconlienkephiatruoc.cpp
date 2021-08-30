#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[k];
        for (int i = 0; i < k; i++)
            cin >> arr[i];
        int i;
        for (i = k - 1; i > 0; i--)
            if (arr[i] != arr[i - 1] + 1)
                break;
        if (arr[i] == 1)
        {
            for (int j = 0; j < k; j++)
                arr[j] = n - k + j + 1;
        }
        else
        {
            arr[i]--;
            for (int j = i + 1; j < k; j++)
                arr[j] = n - k + j + 1;
        }
        for (int i = 0; i < k; i++)
            cout << arr[i] << ' ';
        cout << '\n';
    }
    return 0;
}