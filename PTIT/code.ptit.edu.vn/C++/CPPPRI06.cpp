#include <bits/stdc++.h>
using namespace std;
bool arr[10001] = {};
void sieve()
{
    for (int i = 4; i <= 10000; i += 2)
        arr[i] = 1;
    for (int i = 3; i * i <= 10000; i += 2)
        if (arr[i] == 0)
            for (int j = i * i; j <= 10000; j += i)
                arr[j] = 1;
}

void print(int n)
{
    for (int i = 2; i <= n / 2; i++)
        if (arr[i] == 0 && arr[n - i] == 0)
        {
            cout << i << " " << n - i << endl;
            return;
        }
}

int main()
{
    int t, n;
    cin >> t;
    sieve();
    while (t--)
    {
        cin >> n;
        print(n);
    }
    return 0;
}