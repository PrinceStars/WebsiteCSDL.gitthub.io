#include <bits/stdc++.h>
using namespace std;
#define ll long long
inline ll tonumber(string s)
{
    ll t = 1;
    ll res = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        res += (s[i] - 48) * t;
        t *= 2;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << tonumber(s1) * tonumber(s2) << '\n';
    }
    return 0;
}