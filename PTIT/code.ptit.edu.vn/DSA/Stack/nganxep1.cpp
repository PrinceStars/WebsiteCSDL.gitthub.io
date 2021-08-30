#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("zinput.txt", "r", stdin);
    // freopen("zoutput.txt", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string mode;
    deque<int> St;
    while (cin >> mode)
    {
        if (mode == "push")
        {
            int x;
            cin >> x;
            St.push_back(x);
        }
        else if (mode == "show")
        {
            if (!St.empty())
            {
                deque<int> temp = St;
                while (!temp.empty())
                {
                    cout << temp.front() << ' ';
                    temp.pop_front();
                }
                cout << '\n';
            }
            else
                cout << "empty\n";
        }
        else
            St.pop_back();
    }
    return 0;
}