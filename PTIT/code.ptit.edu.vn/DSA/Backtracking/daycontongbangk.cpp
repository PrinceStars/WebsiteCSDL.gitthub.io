#include <bits/stdc++.h>
using namespace std;
vector<int> res;
bool found = 0;

void print()
{
    cout << '[' << res[0];
    for (int i = 1; i < res.size(); i++)
        cout << ' ' << res[i];
    cout << "] ";
}

void Find(int arr[], int start, int end, int k)
{
    if (k == 0)
    {
        found = 1;
        print();
    }
    for (int i = start; i <= end && arr[i] <= k; i++)
    {
        res.push_back(arr[i]);
        Find(arr, i + 1, end, k - arr[i]);
        res.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        found = 0;
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        Find(arr, 0, n - 1, k);
        if (!found)
            cout << "-1";
        cout << '\n';
    }
    return 0;
}