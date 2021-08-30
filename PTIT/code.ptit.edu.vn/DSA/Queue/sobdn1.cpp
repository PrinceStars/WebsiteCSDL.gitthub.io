#include <bits/stdc++.h>
using namespace std;

long long toint(string str)
{
    long long t = 1, res = 0;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        res += t * (str[i] - 48);
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
        string n;
        cin >> n;
        string b = "";
        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] > '1')
            {
                for (int j = i; j < n.length(); j++)
                    b += '1';
                break;
            }
            else
                b += n[i];
        }
        cout << toint(b) << endl;
    }
    return 0;
}