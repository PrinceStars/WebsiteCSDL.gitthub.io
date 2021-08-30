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
        stack<string> res;
        stack<int> num;
        stack<int> idx;
        for (int i = 0; i < str.length(); ++i)
        {
            if (isdigit(str[i]))
            {
                int temp = 0;
                while (isdigit(str[i]))
                    temp = temp * 10 + str[i++] - 48;
                i--;
                num.push(temp);
            }
            else if (str[i] == '[')
            {
                res.push("");
                idx.push(i);
            }
            else if (str[i] == ']')
            {
                string temp = "";
                string str1 = res.top();
                res.pop();
                if (idx.top() - 1 >= 0 && isdigit(str[idx.top() - 1]))
                {
                    idx.pop();
                    int time = num.top();
                    num.pop();
                    for (int i = 0; i < time; i++)
                        temp += str1;
                }
                else
                    temp = str1;
                if (res.size())
                {
                    string str2 = res.top();
                    res.pop();
                    res.push(str2 + temp);
                }
                else
                    res.push(temp);
            }
            else
            {
                if (res.size())
                {
                    string top = res.top();
                    res.pop();
                    res.push(top + str[i]);
                }
                else
                    res.push(string(1, str[i]));
            }
        }
        cout << res.top() << '\n';
    }
    return 0;
}