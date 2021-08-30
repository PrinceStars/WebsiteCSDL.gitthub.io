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
        long k;
        cin >> k;
        string s;
        cin >> s;
        unordered_map<char, long> count;
        for (int i = 0; i < s.length(); i++)
            count[s[i]]++;
        priority_queue<long> Pq;
        for (auto i : count)
            Pq.push(i.second);
        while (k--)
        {
            long u = Pq.top();
            Pq.pop();
            u--;
            if (u)
                Pq.push(u);
        }
        long res = 0;
        while (!Pq.empty())
        {
            long u = Pq.top();
            Pq.pop();
            res += u * u;
        }
        cout << res << '\n';
    }

    return 0;
}