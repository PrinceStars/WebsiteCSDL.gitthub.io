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
        string str;
        cin >> str;
        int n = str.length();
        int i = n - 1;
        while (i >= 0 && str[i] == '0')
            i--;
        if (i >= 0)
        {
            str[i++] = '0';
            while (i < n)
                str[i++] = '1';
            cout << str << '\n';
        }
        else
        {
            for (int i = 0; i < n; i++)
                cout << '1';
            cout << '\n';
        }
    }
    return 0;
}