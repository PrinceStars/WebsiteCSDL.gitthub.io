#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        priority_queue<ll, vector<ll>, greater<ll>> Pq;
        for (int i = 0; i < n; i++)
            Pq.push(arr[i]);
        ll res = 0;
        while (Pq.size() > 1)
        {
            ll u1 = Pq.top();
            Pq.pop();
            ll u2 = Pq.top();
            Pq.pop();
            Pq.push(u1 + u2);
            res += u1 + u2;
        }
        cout << res << '\n';
    }
    return 0;
}