#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int khong = 0, mot = 0, hai = 0;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 0)
                khong++;
            else if (x == 1)
                mot++;
            else if (x == 2)
                hai++;
        }
        for (int i = 0; i < khong; i++)
            cout << "0 ";
        for (int i = 0; i < mot; i++)
            cout << "1 ";
        for (int i = 0; i < hai; i++)
            cout << "2 ";
        cout << '\n';
    }
    return 0;
}