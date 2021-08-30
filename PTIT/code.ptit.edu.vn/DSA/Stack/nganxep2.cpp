#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> St;
    int Q;
    cin >> Q;
    while (Q--)
    {
        string mode;
        cin >> mode;
        if (mode == "PUSH")
        {
            int x;
            cin >> x;
            St.push(x);
        }
        else if (mode == "POP")
        {
            if (!St.empty())
                St.pop();
        }
        else
        {
            if (!St.empty())
                cout << St.top() << '\n';
            else
                cout << "NONE" << '\n';
        }
    }
    return 0;
}