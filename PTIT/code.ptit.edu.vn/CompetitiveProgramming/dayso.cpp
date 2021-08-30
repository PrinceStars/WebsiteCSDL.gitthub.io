#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    long res = 0;
    for (int i = arr[0]; i >= 0; i--)
    {
        bool found = 1;
        for (int j = 0; j < n; j++)
        {
            int temp = arr[j] / i;
            while (temp > 0 && arr[j] / temp <= i)
                temp--;
            temp++;
            if (arr[j] / temp == i)
                res += temp;
            else
            {
                res = 0;
                found = 0;
                break;
            }
        }
        if (found)
            break;
        // cout << '\n';
    }
    cout << res << '\n';
    return 0;
}