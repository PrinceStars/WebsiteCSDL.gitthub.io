#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int arr[256] = {};
    arr['-'] = arr['+'] = 1;
    arr['*'] = arr['/'] = 2;
    arr['^'] = 3;
    while (t--)
    {
        string str;
        cin >> str;
        stack<char> St;
        string res = "";
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(')
                St.push('(');
            else if (str[i] == '*' || str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '^')
            {
                while (St.size() && arr[St.top()] >= arr[str[i]])
                {
                    res.push_back(St.top());
                    St.pop();
                }
                St.push(str[i]);
            }
            else if (str[i] == ')')
            {
                while (St.size() && St.top() != '(')
                {
                    res.push_back(St.top());
                    St.pop();
                }
                St.pop();
            }
            else
                res.push_back(str[i]);
        }
        while (St.size())
        {
            if (St.top() != '(')
                res.push_back(St.top());
            St.pop();
        }

        cout << res << '\n';
    }

    return 0;
}