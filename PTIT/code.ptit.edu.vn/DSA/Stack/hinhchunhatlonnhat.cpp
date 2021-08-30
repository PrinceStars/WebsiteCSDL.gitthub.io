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
        long long H[n];
        int L[n], R[n];
        for (int i = 0; i < n; i++)
            cin >> H[i];
        stack<int> S;
        S.push(-1);
        for (int i = 0; i < n; i++)
        {
            while (S.size() > 1 && H[S.top()] >= H[i])
                S.pop();
            L[i] = S.top() + 1;
            S.push(i);
        }
        while (!S.empty())
            S.pop();
        S.push(n);
        for (int i = n - 1; i >= 0; i--)
        {
            while (S.size() > 1 && H[S.top()] >= H[i])
                S.pop();
            R[i] = S.top() - 1;
            S.push(i);
        }
        long long res = 0;
        for (int i = 0; i < n; i++)
            res = max(res, (R[i] - L[i] + 1) * H[i]);
        cout << res << '\n';
    }
    return 0;
}