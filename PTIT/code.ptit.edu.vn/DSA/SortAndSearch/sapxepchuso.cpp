#include <bits/stdc++.h>
using namespace std;
void find(set<int> digit, long long arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        while (arr[i])
        {
            digit.insert(arr[i] % 10);
            arr[i] /= 10;
        }
        if (digit.size() == 10)
        {
            for (auto i : digit)
                cout << i << ' ';
            cout << '\n';
            return;
        }
    }
    for (auto i : digit)
        cout << i << ' ';
    cout << '\n';
    return;
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
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        set<int> digit;
        find(digit, arr, n);
    }
    return 0;
}