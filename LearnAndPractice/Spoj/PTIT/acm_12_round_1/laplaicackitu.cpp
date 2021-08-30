#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        string str;
        cin >> str;
        cout << n << " ";
        for (int i = 0; i < str.length(); i++)
        {
            int k = r;
            while (k--)
            {
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}