#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

string bttd(string str)
{
    string transform = "";
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
            transform += str[i];
    return transform;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        if (bttd(str1) == bttd(str2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}