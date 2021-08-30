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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        stack<pii> S;
        S.push({INT_MAX, 0});
        int res[n] = {};
        for (int i = 0; i < n; i++)
        {
            int temp = 1;
            while (S.size() > 1 && S.top().first <= arr[i])
            {
                temp += S.top().second;
                S.pop();
            }
            S.push({arr[i], temp});
            res[i] = temp;
        }
        for (int i = 0; i < n; i++)
            cout << res[i] << ' ';
        cout << '\n';
    }
    return 0;
}