#include <bits/stdc++.h>
using namespace std;

int findmin(int a)
{
    int b = 0, t = 1;
    while (a)
    {
        int u = a % 10;
        if (u == 6)
            u = 5;
        b = u * t + b;
        t *= 10;
        a /= 10;
    }
    return b;
}

int findmax(int a)
{
    int b = 0, t = 1;
    while (a)
    {
        int u = a % 10;
        if (u == 5)
            u = 6;
        b = u * t + b;
        t *= 10;
        a /= 10;
    }
    return b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    int mina = findmin(a), minb = findmin(b);
    int maxa = findmax(a), maxb = findmax(b);

    cout << mina + minb << ' ' << maxa + maxb << '\n';

    return 0;
}