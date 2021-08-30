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
        queue<int> Q;
        int n;
        cin >> n;
        while (n--)
        {
            int mode;
            cin >> mode;
            if (mode == 1)
                cout << Q.size() << '\n';
            else if (mode == 2)
            {
                if (Q.empty())
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
            else if (mode == 3)
            {
                int x;
                cin >> x;
                Q.push(x);
            }
            else if (mode == 4)
            {
                if (!Q.empty())
                    Q.pop();
            }
            else if (mode == 5)
            {
                if (!Q.empty())
                    cout << Q.front() << '\n';
                else
                    cout << "-1\n";
            }
            else
            {
                if (!Q.empty())
                    cout << Q.back() << '\n';
                else
                    cout << "-1\n";
            }
        }
    }
}