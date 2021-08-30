#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

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
        stack<int> pos;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(')
                pos.push(i);
            else if (str[i] == ')')
            {
                if (pos.size())
                {
                    int j = pos.top();
                    pos.pop();
                    if (j > 0 && str[j - 1] == '-')
                        for (int k = j + 1; k < i; k++)
                            if (str[k] == '+')
                                str[k] = '-';
                            else if (str[k] == '-')
                                str[k] = '+';
                }
            }
        }
        for (int i = 0; i < str.length(); i++)
            if (!(str[i] == '(' || str[i] == ')'))
                cout << str[i];
        cout << '\n';
    }
    return 0;
}