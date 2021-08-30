#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, b, p;
    cin >> t;
    while (t--)
    {
        cin >> b >> p;
        int count = (b / p * p - p) / p + 1;
        cout << count << int i = b / p * p + 1;
        while (i > 1)
        {
            int temp = sqrt(i);
            if (temp * temp == i && temp % p != 1)
                count++;
            i -= p;
        }
        cout << count << endl;
    }
    return 0;
}