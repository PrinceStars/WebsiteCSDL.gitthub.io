#include <bits/stdc++.h>
using namespace std;

string a = "First", b = "Second";

string res(int c, int m)
{
    if (c % (m + 1) == 0)
        return b;
    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, m;
        cin >> c >> m;
        cout << res(c, m) << endl;
    }
    return 0;
}