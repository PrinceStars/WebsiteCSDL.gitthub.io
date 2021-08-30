#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string number;
        cin >> number;
        long res = 0;
        long temp = 1;
        for (int i = number.length() - 1; i >= 0; i--)
        {
            res += (number[i] - 48) * temp * (i + 1);
            temp = temp * 10 + 1;
        }
        cout << res << '\n';
    }
    return 0;
}