#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int Q;
    cin >> Q;
    queue<int> q;
    while (Q--)
    {
        string mode;
        cin >> mode;
        if (mode == "PUSH")
        {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (mode == "POP")
        {
            if (!q.empty())
                q.pop();
        }
        else
        {
            if (!q.empty())
                cout << q.front() << '\n';
            else
                cout << "NONE\n";
        }
    }
    return 0;
}