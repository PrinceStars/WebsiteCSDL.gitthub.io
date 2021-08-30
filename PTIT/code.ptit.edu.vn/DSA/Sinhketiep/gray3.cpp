#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

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
        cout << s[0];
        for (int i = 1; i < s.length(); i++)
            cout << (s[i] ^ s[i - 1]);
        cout << '\n';
    }
    return 0;
}