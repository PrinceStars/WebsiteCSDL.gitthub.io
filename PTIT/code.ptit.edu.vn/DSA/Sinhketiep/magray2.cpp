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
        string s;
        cin >> s;
        int t = s[0] - 48;
        cout << s[0];
        for (int i = 1; i < s.length(); i++)
        {
            t = t ^ (s[i] - 48);
            cout << t;
        }
        cout << '\n';
    }
    return 0;
}