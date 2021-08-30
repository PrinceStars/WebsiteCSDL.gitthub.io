#include <bits/stdc++.h>
using namespace std;
int ugly[10000];

void preProcess()
{
    ugly[0] = 1;
    int i2 = 0, i3 = 0, i5 = 0;
    int j = 1;
    while (j <= 9999)
    {
        int multi_with_2 = ugly[i2] * 2;
        int multi_with_3 = ugly[i3] * 3;
        int multi_with_5 = ugly[i5] * 5;
        int MIN_VALUE = min(min(multi_with_2, multi_with_3), multi_with_5);
        if (MIN_VALUE == multi_with_2)
            i2++;
        if (MIN_VALUE == multi_with_3)
            i3++;
        if (MIN_VALUE == multi_with_5)
            i5++;
        ugly[j++] = MIN_VALUE;
    }
    // for (int i = 0; i < 15; i++)
    //     cout << ugly[i] << ' ';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    preProcess();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << ugly[n - 1] << '\n';
    }
    return 0;
}