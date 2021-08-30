#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long res = 1;
    long long temp[21] = {1, 1};
    for (int i = 2; i <= n; i++)
    {
        temp[i] = temp[i - 1] * i;
        res += temp[i];
    }
    cout << res << endl;
}