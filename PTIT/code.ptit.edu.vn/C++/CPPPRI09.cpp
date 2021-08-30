#include <bits/stdc++.h>
using namespace std;

void prime(int n)
{
    int dem = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        dem++;
    }
    if (dem > 0)
        cout << "2 " << dem << " ";
    for (int i = 3; i * i <= n; i += 2)
    {
        dem = 0;
        while (n % i == 0)
        {
            n /= i;
            dem++;
        }
        if (dem > 0)
            cout << i << " " << dem << " ";
    }
    if (n > 1)
        cout << n << " 1";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        prime(n);
    }
}