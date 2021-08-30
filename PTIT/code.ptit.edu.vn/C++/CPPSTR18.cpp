#include <bits/stdc++.h>
using namespace std;

int findMaxSub(string str, int po)
{
    if (po < 0)
        po = 0;
    for (int i = po - 2; i < po +)
}

int findMax(string str)
{
    int res;
    for (int i = 0; i < str.length() - 2; i++)
    {
        if (str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '0')
        {
            string str2 = str.substr(0, i) + str.substr(i + 3, str.length() - i - 3);
        }
    }
    return res;
}
int main()
{
    int t;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> str;
        cout << findMax(str);
    }

    return 0;
}