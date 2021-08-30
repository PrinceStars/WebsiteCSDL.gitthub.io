#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    long long m;
    while (t--)
    {
        cin >> s >> m;
        long long mod = 0;
        for (int i = 0; i < s.length(); i++)
        {
            mod = ((mod * (10 % m)) % m + (s[i] - 48) % m) % m;
        }
        cout << mod << endl;
    }
    return 0;
}