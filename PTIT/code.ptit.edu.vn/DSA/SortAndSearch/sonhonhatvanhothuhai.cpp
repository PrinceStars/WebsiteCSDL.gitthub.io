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
        int n;
        cin >> n;
        set<long> S;
        for (int i = 0; i < n; i++)
        {
            long x;
            cin >> x;
            S.insert(x);
        }
        if (S.size() == 1)
            cout << "-1\n";
        else
            cout << *(S.begin()) << ' ' << *(++S.begin()) << '\n';
    }
    return 0;
}