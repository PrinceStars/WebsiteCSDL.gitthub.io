#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr1[n];
        vector<int> res;
        cin >> arr1[0];
        res.push_back(arr1[0]);
        for (int i = 1; i < n; i++)
        {
            cin >> arr1[i];
            res.push_back(arr1[i] * arr1[i - 1] / gcd(arr1[i], arr1[i - 1]));
        }
        res.push_back(arr1[n - 1]);
        for (auto i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}