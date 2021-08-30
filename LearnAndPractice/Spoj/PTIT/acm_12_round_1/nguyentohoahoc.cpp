#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    stack<int> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'O')
            s.push(16);
        else if (str[i] == 'H')
            s.push(1);
        else if (str[i] == 'C')
            s.push(12);
        else if (str[i] >= '2' && str[i] <= '9')
        {
            int temp = s.top();
            s.pop();
            s.push(temp * (str[i] - 48));
        }
        else if (str[i] == '(')
            s.push(0);
        else if (str[i] == ')')
        {
            int temp = 0;
            while (!s.empty() && s.top() != 0)
            {
                temp += s.top();
                s.pop();
            }
            s.pop();
            s.push(temp);
        }
    }
    int res = 0;
    while (!s.empty())
    {
        res += s.top();
        s.pop();
    }
    cout << res;
    return 0;
}