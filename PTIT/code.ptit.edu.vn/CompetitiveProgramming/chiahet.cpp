#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    for (int i = 2; i <= n && count < k; i += 2)
    {
        int j = i;
        while (j % 2 == 0)
        {
            count++;
            j /= 2;
        }
    }
    if (count < k)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}