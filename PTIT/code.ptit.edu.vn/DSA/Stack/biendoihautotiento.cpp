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
        string str;
        cin >> str;
        stack<string> St;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
            {
                string s1 = St.top();
                St.pop();
                string s2 = St.top();
                St.pop();
                St.push(str[i] + s2 + s1);
            }
            else
            {
                string temp = "";
                temp += str[i];
                St.push(temp);
            }
        }
        cout << St.top() << '\n';
    }

    return 0;
}