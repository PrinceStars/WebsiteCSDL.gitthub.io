#include <bits/stdc++.h>
using namespace std;

bool isSmaller(string a, string b)
{
    return a.length() == b.length() ? a < b : a.length() < b.length();
}

string findDiff(string a, string b)
{
    if (isSmaller(a, b))
        swap(a, b);
    string str = "";
    int n1 = a.length(), n2 = b.length();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;
    for (int i = 0; i < n2; i++)
    {
        int sub = a[i] - b[i] - carry;
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
        str.push_back(sub + '0');
    }

    for (int i = n2; i < n1; i++)
    {
        int sub = ((a[i] - '0') - carry);
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
        str.push_back(sub + '0');
    }
    reverse(str.begin(), str.end());
    return str;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << findDiff(a, b) << endl;
    }

    return 0;
}