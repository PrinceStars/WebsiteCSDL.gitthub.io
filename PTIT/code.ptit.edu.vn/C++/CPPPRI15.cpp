#include <bits/stdc++.h>
using namespace std;
int arr[10001] = {};

void sieve()
{
    for (int i = 2; i <= 10000; i += 2)
        arr[i] = 2;
    for (int i = 3; i <= 10000; i += 2)
        arr[i] = i;
    for (int i = 3; i * i <= 10000; i += 2)
        if (arr[i] == i)
            for (int j = i * i; j <= 10000; j += i)
                if (arr[j] == j)
                    arr[j] = i;
}

void print(int n)
{
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int t, n;
    cin >> t;
    sieve();
    arr[1] = 1;
    while (t--)
    {
        cin >> n;
        print(n);
    }
    return 0;
}