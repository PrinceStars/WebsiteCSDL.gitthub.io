#include <bits/stdc++.h>
using namespace std;

string findSum(string a, string b)
{
    // Before proceeding further, make sure length of b is larger.
    if (a.length() > b.length())
        swap(a, b);

    // Take an empty string for storing result
    string str = "";

    // Calculate length of both string
    int n1 = a.length(), n2 = b.length();

    // Reverse both of strings
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int carry = 0;
    for (int i = 0; i < n1; i++)
    {
        // Do school mathematics, compute sum of current digits and carry
        int sum = ((a[i] - '0') + (b[i] - '0') + carry);
        str.push_back(sum % 10 + '0');

        // Calculate carry for next step
        carry = sum / 10;
    }

    // Add remaining digits of larger number
    for (int i = n1; i < n2; i++)
    {
        int sum = ((b[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    // Add remaining carry
    if (carry)
        str.push_back(carry + '0');

    // reverse resultant string
    reverse(str.begin(), str.end());

    return str;
}
int main()
{
    string a = "12";
    string b = "198111";
    cout << findSum(a, b);
    return 0;
}
