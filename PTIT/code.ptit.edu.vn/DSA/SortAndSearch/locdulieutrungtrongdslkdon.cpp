#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    set<int> Set;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (Set.find(x) == Set.end())
            cout << x << ' ';
        Set.insert(x);
    }

    return 0;
}