#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str;
        getline(cin, str);
        stack<int> thutu;
        int Max = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(')
            {
                Max = Max + 1;
                thutu.push(Max);
                cout << Max << ' ';
            }
            else if (str[i] == ')')
            {
                int temp = thutu.top();
                thutu.pop();
                cout << temp << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}