#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

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
        unordered_set<long> possibleHeight;
        ll H[n];
        ll L[n], R[n];
        for (int i = 0; i < n; i++)
        {
            cin >> H[i];
            possibleHeight.insert(H[i]);
        }
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
        ll res = 0;
        for (int i = 0; i < n; i++)
        {
            if (possibleHeight.find(min(R[i] - L[i] + 1, H[i])) != possibleHeight.end())
                res = max(res, min(R[i] - L[i] + 1, H[i]));
        }
        cout << res << '\n';
    }
    return 0;
}