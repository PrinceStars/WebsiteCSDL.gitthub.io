#include <bits/stdc++.h>
using namespace std;

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
        stack<int> St;
        int t = 2;
        St.push(1);
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'D')
                St.push(t++);
            else
            {
                while (!St.empty())
                {
                    int u = St.top();
                    St.pop();
                    cout << u;
                }
                St.push(t++);
            }
        }
        while (!St.empty())
        {
            cout << St.top();
            St.pop();
        }

        cout << '\n';
    }
    return 0;
}