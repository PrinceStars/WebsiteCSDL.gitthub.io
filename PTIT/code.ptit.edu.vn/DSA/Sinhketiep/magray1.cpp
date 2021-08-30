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
        queue<string> q;
        q.push("0");
        q.push("1");
        bool turn = 1;
        while (!q.empty())
        {
            string s = q.front();
            q.pop();
            if (s.length() == n)
                cout << s << ' ';
            if (s.length() <= n - 1)
                if (turn)
                {
                    q.push(s + "0");
                    q.push(s + "1");
                    turn = 0;
                }
                else
                {
                    q.push(s + "1");
                    q.push(s + "0");
                    turn = 1;
                }
        }
        cout << '\n';
    }
    return 0;
}