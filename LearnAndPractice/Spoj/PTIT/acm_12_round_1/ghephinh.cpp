#include <bits/stdc++.h>
using namespace std;

int main()
{
    long a[3], b[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i] >> b[i];
        if (a[i] > b[i])
            swap(a[i], b[i]);
    }
    if (b[0] == b[1] && b[0] == b[2] && a[0] + a[1] + a[2] == b[0])
    {
        cout << b[0];
        return 0;
    }
    else
    {
        long length = max(max(b[0], b[1]), b[2]);
    }

    return 0;
}