#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h;
        cin >> n >> h;
        for (int i = 1; i <= n - 1; i++)
            cout << fixed << setprecision(6) << h * sqrt(i * 1.0 / n) << " ";
        cout << endl;
    }
    return 0;
}