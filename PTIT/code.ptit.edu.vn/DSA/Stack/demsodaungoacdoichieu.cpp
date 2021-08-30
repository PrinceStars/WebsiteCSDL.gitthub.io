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
        stack<char> St;
        int res = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ')')
            {
                if (!St.empty() && St.top() == '(')
                    St.pop();
                else
                {
                    res++;
                    St.push('(');
                }
            }
            else
                St.push('(');
        }
        cout << res + St.size() / 2 << '\n';
    }
    return 0;
}