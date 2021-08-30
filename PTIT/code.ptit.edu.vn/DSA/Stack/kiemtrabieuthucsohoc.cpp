#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        bool check;
        stack<char> St;
        for (int i = 0; i < s.length(); i++)
            if (s[i] == ')')
            {
                check = 1;
                char t = St.top();
                St.pop();
                while (t != '(')
                {
                    if (t == '+' || t == '-' || t == '*' || t == '/')
                        check = 0;
                    t = St.top();
                    St.pop();
                }
                if (check)
                    break;
            }
            else
                St.push(s[i]);
        if (check)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}