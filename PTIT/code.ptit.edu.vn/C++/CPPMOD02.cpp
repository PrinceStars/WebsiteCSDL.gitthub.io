#include <bits/stdc++.h>
using namespace std;

int modulo(int a, int m)
{
    for (int i = 0; i < a; i++)
    {
        if ((i * m) % a == a - 1)
            return (i * m + 1) / a;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, m;
        cin >> a >> m;
        cout << modulo(a % m, m) << endl;
    }
    return 0;
}