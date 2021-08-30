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
        int n;
        cin >> n;
        int count = 0;
        count += n / 1000;
        n %= 1000;
        count += n / 500;
        n %= 500;
        count += n / 200;
        n %= 200;
        count += n / 100;
        n %= 100;
        count += n / 50;
        n %= 50;
        count += n / 20;
        n %= 20;
        count += n / 10;
        n %= 10;
        count += n / 5;
        n %= 5;
        count += n / 2;
        n %= 2;
        count += n;
        cout << count << '\n';
    }
    return 0;
}