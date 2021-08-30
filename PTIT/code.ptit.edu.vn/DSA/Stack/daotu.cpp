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
    cin.ignore();
    while (t--)
    {
        string str;
        getline(cin, str);
        stack<string> res;
        string temp = "";
        for (int i = 0; i < str.length(); ++i)
        {
            if (str[i] != ' ')
                temp += str[i];
            else
            {
                res.push(temp);
                temp = "";
            }
        }
        res.push(temp);
        while (res.size())
        {
            cout << res.top() << ' ';
            res.pop();
        }
        cout << '\n';
    }

    return 0;
}