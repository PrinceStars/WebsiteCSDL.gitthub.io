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
        for (int i = str.length() - 1; i >= 0; i--)
        {
            if (str[i] == '0')
            {
                str[i] = '1';
                break;
            }
            str[i] = '0';
        }
        cout << str << '\n';
    }
    return 0;
}