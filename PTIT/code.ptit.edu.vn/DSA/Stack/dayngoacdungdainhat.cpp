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
        stack<int> S;
        int res = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(')
                S.push(1);
            else
            {
                if (!S.empty())
                {
                    if (S.top() == 1)
                    {
                        S.pop();
                        if (!S.empty() && S.top() != 1 && S.top() != -1)
                        {
                            int temp = S.top() + 2;
                            S.pop();
                            res = max(res, temp);
                            S.push(temp);
                        }
                        else
                        {
                            S.push(2);
                            res = max(res, 2);
                        }
                    }
                    else if (S.top() != -1)
                    {
                        int temp = S.top();
                        S.pop();
                        if (!S.empty() && S.top() == 1)
                        {
                            S.pop();
                            temp += 2;
                            if (!S.empty() && S.top() != 1 && S.top() != -1)
                            {
                                temp += S.top();
                                S.pop();
                            }
                            res = max(res, temp);
                            S.push(temp);
                        }
                    }
                }
                else
                    S.push(-1);
            }
        }

        cout << res << endl;
    }
    return 0;
}