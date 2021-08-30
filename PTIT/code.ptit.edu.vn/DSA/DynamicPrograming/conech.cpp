#include <bits/stdc++.h>
using namespace std;
long long tribo[51] = {0, 1, 2, 4};

long long find(int n)
{
    if (n <= 3)
        return tribo[n];
    if (!tribo[n])
        tribo[n] = find(n - 1) + find(n - 2) + find(n - 3);
    return tribo[n];
}
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
        cout << find(n) << '\n';
    }
    return 0;
}