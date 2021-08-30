#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        stack<char> S;
        int res = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(')
                S.push('(');
            else
            {
                if (S.size() && S.top() == '(')
                {
                    res += 2;
                    S.pop();
                }
                else
                    S.push(')');
            }
        }

        cout << res << endl;
    }
    return 0;
}