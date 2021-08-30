#include <bits/stdc++.h>
using namespace std;
int arr[10001] = {};

void sieve()
{
    for (int i = 4; i <= 10000; i += 2)
        arr[i] = 1;
    for (int i = 3; i * i <= 10000; i += 2)
        if (arr[i] == 0)
            for (int j = i * i; j <= 10000; j += i)
                arr[j] = 1;
}

void print(int n, int m)
{
    for (int i = n; i <= m; i++)
        if (arr[i] == 0)
            cout << i << " ";
    cout << endl;
}

int main()
{
    int t, n, m;
    cin >> t;
    sieve();
    arr[1] = 1;
    while (t--)
    {
        cin >> n >> m;
        print(n, m);
    }
    return 0;
}