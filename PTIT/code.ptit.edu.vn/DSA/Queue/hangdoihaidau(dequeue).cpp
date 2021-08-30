#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int Q;
    cin >> Q;
    deque<int> Dq;
    while (Q--)
    {
        string mode;
        cin >> mode;
        if (mode == "PUSHBACK")
        {
            int x;
            cin >> x;
            Dq.push_back(x);
        }
        else if (mode == "PUSHFRONT")
        {
            int x;
            cin >> x;
            Dq.push_front(x);
        }
        else if (mode == "POPFRONT")
        {
            if (!Dq.empty())
                Dq.pop_front();
        }
        else if (mode == "POPBACK")
        {
            if (!Dq.empty())
                Dq.pop_back();
        }
        else if (mode == "PRINTFRONT")
        {
            if (!Dq.empty())
                cout << Dq.front() << '\n';
            else
                cout << "NONE\n";
        }
        else
        {
            if (!Dq.empty())
                cout << Dq.back() << '\n';
            else
                cout << "NONE\n";
        }
    }
    return 0;
}