#include <bits/stdc++.h>
using namespace std;

void print(vector<int> a, int n)
{
    if (n)
    {
        vector<int> arr;
        for (int i = 1; i < n; i++)
            arr.push_back(a[i] + a[i - 1]);
        print(arr, n - 1);
        cout << '[' << a[0];
        for (int i = 1; i < n; i++)
            cout << ' ' << a[i];
        cout << "] ";
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
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        print(arr, n);
        cout << '\n';
    }
    return 0;
}