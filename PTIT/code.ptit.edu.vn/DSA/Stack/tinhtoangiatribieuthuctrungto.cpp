#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define bieuthuc 6 * 3 + 2 - (6 - 4 / 2)

int priority[256];

long calcu(long val1, long val2, char oper)
{
    if (oper == '/')
        return val1 / val2;
    else if (oper == '*')
        return val1 * val2;
    else if (oper == '+')
        return val1 + val2;
    else if (oper == '-')
        return val1 - val2;
    else if (oper == '^')
    {
        long val = 1;
        for (int i = 0; i < val2; i++)
            val *= val1;
        return val;
    }
    else if (oper == '%')
        return val1 % val2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    priority['('] = priority[')'] = 0;
    priority['+'] = priority['-'] = 1;
    priority['*'] = priority['/'] = priority['%'] = 2;
    priority['^'] = 3;
    int t;
    cin >> t;
    long b = bieuthuc;
    cout << b;
    while (t--)
    {
        string str;
        cin >> str;

        stack<char> sign;
        stack<long> value;
        int n = str.length();
        for (int i = 0; i < n; i++)
        {
            if (str[i] == ' ')
                continue;
            if (str[i] == '(')
                sign.push('(');
            else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^' || str[i] == '%')
            {
                if (sign.size() && priority[str[i]] <= priority[sign.top()])
                {
                    long num2 = value.top();
                    value.pop();
                    long num1 = value.top();
                    value.pop();
                    char oper = sign.top();
                    sign.pop();
                    value.push(calcu(num1, num2, oper));
                }
                sign.push(str[i]);
            }
            else if (str[i] == ')')
            {
                while (sign.size() && sign.top() != '(')
                {
                    long num2 = value.top();
                    value.pop();
                    long num1 = value.top();
                    value.pop();
                    char oper = sign.top();
                    sign.pop();
                    value.push(calcu(num1, num2, oper));
                }
                if (sign.size())
                    sign.pop();
            }
            else if (isdigit(str[i]))
            {
                long temp = 0;
                while (i < n && isdigit(str[i]))
                    temp = temp * 10 + (str[i++] - 48);
                i--;
                value.push(temp);
            }
        }
        while (sign.size())
        {
            long num2 = value.top();
            value.pop();
            long num1 = value.top();
            value.pop();
            char oper = sign.top();
            sign.pop();
            value.push(calcu(num1, num2, oper));
        }
        cout << value.top() << '\n';
    }
    return 0;
}