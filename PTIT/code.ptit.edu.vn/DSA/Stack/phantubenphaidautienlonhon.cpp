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
        int n;
        cin >> n;
        long long arr[n + 1];
        arr[n] = -1;
        int R[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        stack<int> S;
        S.push(n);
        for (int i = n - 1; i >= 0; i--)
        {
            while (S.size() > 1 && arr[S.top()] <= arr[i])
                S.pop();
            R[i] = S.top();
            S.push(i);
        }
        for (int i = 0; i < n; i++)
            cout << arr[R[i]] << ' ';
        cout << '\n';
    }
    return 0;
}