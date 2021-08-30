#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    return b == 0 ? a : GCD(b, a % b);
}

long LCM(int a, int b)
{
    return a * b / GCD(a, b);
}

long count(int m, int n, int a, int b)
{
    long lcm = LCM(a, b);
    long count = 0;
    if (n / a * a > m)
        count += (n / a * a - m) / a + 1;
    if (n / b * b > m)
        count += (n / b * b - m) / b + 1;
    if (n / lcm * lcm > m)
        count -= (n / lcm * lcm - m) / lcm + 1;
    return count;
}
int main()
{
    long m, n;
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> m >> n >> a >> b;
        cout << count(m, n, a, b) << endl;
    }
    return 0;
}