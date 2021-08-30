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
        string s;
        cin >> s;
        stack<int> St;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] >= '0' && s[i] <= '9')
                St.push(s[i] - 48);
            else if (s[i] == '*')
            {
                int t = St.top();
                St.pop();
                t *= St.top();
                St.pop();
                St.push(t);
            }
            else if (s[i] == '/')
            {
                int t = St.top();
                St.pop();
                t /= St.top();
                St.pop();
                St.push(t);
            }
            else if (s[i] == '+')
            {
                int t = St.top();
                St.pop();
                t += St.top();
                St.pop();
                St.push(t);
            }
            else
            {
                int t = St.top();
                St.pop();
                t -= St.top();
                St.pop();
                St.push(t);
            }
        }
        cout << St.top() << '\n';
    }
    return 0;
}