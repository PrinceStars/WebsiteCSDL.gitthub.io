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
        int n, s, m;
        cin >> n >> s >> m;
        if (n * (s - s / 7) < s * m)
            cout << "-1\n";
        else
            cout << ceil(m * 1.0 * s / n) << '\n';
    }
    return 0;
}