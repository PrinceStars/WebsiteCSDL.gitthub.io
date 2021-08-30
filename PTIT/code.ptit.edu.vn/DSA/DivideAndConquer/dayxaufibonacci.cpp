#include <bits/stdc++.h>
using namespace std;
long long Fibo[93] = {0, 1};

char find(long long n, long long i)
{
    if (n <= 2)
        return n + 'A' - 1;
    if (i > Fibo[n - 2])
        return find(n - 1, i - Fibo[n - 2]);
    return find(n - 2, i);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 2; i <= 92; i++)
        Fibo[i] = Fibo[i - 2] + Fibo[i - 1];
    int t;
    cin >> t;
    while (t--)
    {
        long long n, i;
        cin >> n >> i;
        cout << find(n, i) << '\n';
    }
    return 0;
}