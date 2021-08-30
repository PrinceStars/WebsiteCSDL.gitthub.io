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
        long n;
        cin >> n;
        long dem4 = 0, dem7 = 0;
        dem7 = n / 7;
        n %= 7;
        dem4 = n / 4;
        n %= 4;
        if (n > dem7)
            cout << "-1\n";
        else
        {
            dem7 -= n;
            dem4 += 2 * n;
            while (dem4--)
                cout << 4;
            while (dem7--)
                cout << 7;
            cout << '\n';
        }
    }
    return 0;
}