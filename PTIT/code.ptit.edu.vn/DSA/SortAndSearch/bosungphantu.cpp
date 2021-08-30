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
        set<int> Set;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            Set.insert(x);
        }
        int res = *Set.rbegin() - *Set.begin() + 1 - Set.size();
        cout << max(res, 0) << '\n';
    }
    return 0;
}