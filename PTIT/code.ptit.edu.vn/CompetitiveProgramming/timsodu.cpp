#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int num = (n[n.length() - 2] - 48) * 10 + n[n.length() - 1];
        if (num % 4)
            cout
                << "0" << endl;
        else
            cout << "4" << endl;
    }
    return 0;
}