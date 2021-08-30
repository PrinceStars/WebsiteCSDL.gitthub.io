#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("zinput.txt", "r", stdin);
    freopen("zoutput.txt", "w", stdout);
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
                string temp = "";
                string s1 = St.top();
                St.pop();
                string s2 = St.top();
                St.pop();
                St.push(temp + s2 + str[i] + s1);
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