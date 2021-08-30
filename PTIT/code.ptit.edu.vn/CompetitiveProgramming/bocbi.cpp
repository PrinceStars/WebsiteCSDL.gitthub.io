#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    k--;
    cout << min(k, a) + min(k, b) + min(k, c) + 1;
    return 0;
}