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
        int k;
        cin >> k;
        string s;
        cin >> s;
        unordered_map<char, int> count;
        for (int i = 0; i < s.length(); i++)
            count[s[i]]++;
        priority_queue<int> Pq;
        for (auto i : count)
            Pq.push(i.second);
        while (k--)
        {
            int u = Pq.top();
            Pq.pop();
            u--;
            if (u)
                Pq.push(u);
        }
        int res = 0;
        while (!Pq.empty())
        {
            int u = Pq.top();
            Pq.pop();
            res += u * u;
        }
        cout << res << '\n';
    }

    return 0;
}