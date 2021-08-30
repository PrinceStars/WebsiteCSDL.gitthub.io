#include <bits/stdc++.h>
using namespace std;

bool arr[10001] = {};

void check(int n)
{
    vector<int> arr;
    int dem = 0;
    if (n % 2 == 0)
    {
        arr.push_back(2);
        while (n % 2 == 0)
        {
            n /= 2;
            dem++;
        }
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            arr.push_back(i);
            if (dem > 3 || arr.size() > 3)
            {
                cout << 0 << endl;
                return;
            }
            while (n % i == 0)
            {
                n /= i;
                dem++;
            }
        }
    }
    if (n > 1)
    {
        dem++;
        arr.push_back(n);
    }
    if (dem == 3 && arr.size() == 3)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        check(n);
    }
    return 0;
}