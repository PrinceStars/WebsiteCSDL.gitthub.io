#include <bits/stdc++.h>
using namespace std;

int n, k, s;
long res = 0;

void find(int i, int sum, int x)
{
    if (i == k && sum == s)
        res++;
    for (int j = x; j <= n; j++)
        find(i + 1, sum + j, j + 1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (1)
    {
        res = 0;
        cin >> n >> k >> s;
        if (!n && !k && !s)
            break;
        find(0, 0, 1);
        cout << res << '\n';
    }

    return 0;
}