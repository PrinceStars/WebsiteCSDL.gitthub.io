#include <bits/stdc++.h>
using namespace std;

long count(string str)
{
    long res = 0;
    for (int i = str.length() - 1; i >= 2; i--)
    {
        int mod3 = 0, mod8 = 0;
        mod3 = (mod3 + str[i] % 3) % 3;
        mod8 = (mod8 + str[i] % 8) % 8;
        // cout << i << ":" << mod8 << "-" << mod3 << " ";
        if (!mod8 && mod3)
            res++;

        mod3 = (mod3 + str[i - 1] % 3) % 3;
        mod8 = (mod8 + (str[i - 1] % 8 * 2) % 8) % 8;
        if (!mod8 && mod3)
            res++;

        mod3 = (mod3 + str[i - 2] % 3) % 3;
        mod8 = (mod8 + (str[i - 2] % 8 * 4) % 8) % 8;
        // cout << "mod8:" << mod8 << " ";
        if (!mod8)
        {
            if (mod3)
                res++;
            for (int j = i - 3; j >= 0; j--)
            {
                mod3 = (mod3 + str[j] % 3) % 3;
                if (mod3)
                    res++;
            }
        }
    }
    if (str[0] == '8')
        res++;
    if (str[1] == '8')
        res++;
    int t = (str[0] - 48) * 10 + (str[1] - 48);
    if (t % 8 == 0 && t % 3 != 0)
        res++;
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
        cout << count(str) << endl;
    }
    return 0;
}