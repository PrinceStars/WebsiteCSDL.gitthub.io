#include <bits/stdc++.h>
using namespace std;
vector<int> res;
bool found = 0;

void print()
{
    cout << '[' << res[0];
    for (int i = 1; i < res.size(); i++)
        cout << ' ' << res[i];
    cout << "]";
}

void Find(int arr[], int start, int end, int x)
{
    if (x == 0)
    {
        found = 1;
        print();
    }
    for (int i = start; i <= end && arr[i] <= x; i++)
    {
        res.push_back(arr[i]);
        Find(arr, i, end, x - arr[i]);
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
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Find(arr, 0, n - 1, x);
        if (!found)
            cout << "-1";
        cout << '\n';
    }
    return 0;
}