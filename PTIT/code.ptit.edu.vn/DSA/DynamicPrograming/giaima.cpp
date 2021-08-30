#include <bits/stdc++.h>
using namespace std;
int findMax(string M)
{
    if (M[0] == '0')
        return 0;
    int n = M.length();
    int DP[n + 1] = {1, 1};
    for (int i = 2; i <= n; i++)
    {
        if (M[i - 1] > '0')
            DP[i] = DP[i - 1];
        if (M[i - 2] == '1' || (M[i - 2] == '2' && M[i - 1] < '7'))
            DP[i] += DP[i - 2];
    }
    return DP[n];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string M;
        cin >> M;
        cout << findMax(M) << '\n';
    }
    return 0;
}