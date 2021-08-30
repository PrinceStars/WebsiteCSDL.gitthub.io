#include <bits/stdc++.h>
using namespace std;
int k;

string sum(string a, string b)
{
    if (a.length() > b.length())
        swap(a, b);
    string str = "";
    int n1 = a.length(), n2 = b.length();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int carry = 0;
    for (int i = 0; i < n1; i++)
    {
        int sum = ((a[i] - '0') + (b[i] - '0') + carry);
        str.push_back(sum % k + '0');
        carry = sum / k;
    }
    for (int i = n1; i < n2; i++)
    {
        int sum = ((b[i] - '0') + carry);
        str.push_back(sum % k + '0');
        carry = sum / k;
    }
    if (carry)
        str.push_back(carry + '0');
    reverse(str.begin(), str.end());

    return str;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> k >> a >> b;
        cout << sum(a, b) << '\n';
    }
    return 0;
}