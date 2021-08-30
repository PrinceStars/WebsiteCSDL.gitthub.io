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
    vector<long> evenpos;
    vector<long> oddpos;
    for (int i = 0; i < n; i++)
    {
        long x;
        cin >> x;
        if (i % 2)
            evenpos.push_back(x);
        else
            oddpos.push_back(x);
    }
    sort(evenpos.begin(), evenpos.end());
    sort(oddpos.begin(), oddpos.end());
    auto e = evenpos.rbegin();
    auto o = oddpos.begin();
    while (e != evenpos.rend() && o != oddpos.end())
    {
        cout << *o << ' ' << *e << ' ';
        e++;
        o++;
    }
    if (o != oddpos.end())
        cout << *o << ' ';

    return 0;
}