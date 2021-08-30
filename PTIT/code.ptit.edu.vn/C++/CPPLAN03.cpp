#include <bits/stdc++.h>
using namespace std;

string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    vector<int> res(len1 + len2, 0);

    int n1 = 0, n2 = 0;
    for (int i = len1 - 1; i >= 0; i--)
    {
        int nho = 0;
        int t1 = num1[i] - 48;

        n2 = 0;

        for (int j = len2 - 1; j >= 0; j--)
        {
            int t2 = num2[j] - 48;
            int sum = t1 * t2 + res[n1 + n2] + nho;
            nho = sum / 10;
            res[n1 + n2] = sum % 10;
            n2++;
        }

        if (nho > 0)
            res[n1 + n2] += nho;
        n1++;
    }

    int i = res.size() - 1;
    while (i >= 0 && res[i] == 0)
        i--;

    if (i == -1)
        return "0";

    string s = "";

    while (i >= 0)
        s += to_string(res[i--]);

    return s;
}

int main()
{
    int t;
    cin >> t;
    string str1, str2;
    while (t--)
    {
        cin >> str1 >> str2;

        if ((str1.at(0) == '-' || str2.at(0) == '-') &&
            (str1.at(0) != '-' || str2.at(0) != '-'))
            cout << "-";

        if (str1.at(0) == '-' && str2.at(0) != '-')
        {
            str1 = str1.substr(1);
        }
        else if (str1.at(0) != '-' && str2.at(0) == '-')
        {
            str2 = str2.substr(1);
        }
        else if (str1.at(0) == '-' && str2.at(0) == '-')
        {
            str1 = str1.substr(1);
            str2 = str2.substr(1);
        }
        cout << multiply(str1, str2) << endl;
    }
    return 0;
}