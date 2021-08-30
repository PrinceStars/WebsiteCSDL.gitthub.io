#include <bits/stdc++.h>
using namespace std;

void create(string a, int i, int n, int k)
{
    if (i == n)
    {
        if (k == 0)
            cout << a << '\n';
    }
    else
    {
        string b;
        b = a + "0";
        create(b, i + 1, n, k);

        b = a + "1";
        create(b, i + 1, n, k - 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        create("", 0, n, k);
    }
    return 0;
}