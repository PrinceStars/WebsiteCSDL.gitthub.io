#include <bits/stdc++.h>
using namespace std;

void find(int S, int D)
{
    if (D * 9 < S)
    {
        cout << "-1\n";
        return;
    }
    int res[D];
    res[0] = max(S - (D - 1) * 9, 1);
    S -= res[0];

    for (int i = 1; i < D; i++)
    {
        res[i] = max(S - (D - i - 1) * 9, 0);
        S -= res[i];
    }
    for (int i = 0; i < D; i++)
        cout << res[i];
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int S, D;
        cin >> S >> D;
        find(S, D);
    }
    return 0;
}