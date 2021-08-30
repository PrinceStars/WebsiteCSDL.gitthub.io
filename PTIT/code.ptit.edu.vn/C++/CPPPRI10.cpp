#include <bits/stdc++.h>
using namespace std;

int prime[100001] = {};

int tongcs(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool check(int n)
{
    if (prime[n] == n)
        return 0;
    int sum1 = 0, sum2 = 0;

    sum1 = tongcs(n);
    while (prime[n] != n)
    {
        sum2 += tongcs(prime[n]);
        n /= prime[n];
    }
    sum2 += tongcs(prime[n]);
    return sum1 == sum2;
}

void sieve()
{
    for (int i = 2; i <= 100000; i += 2)
        prime[i] = 2;
    for (int i = 3; i <= 100000; i += 2)
        prime[i] = i;
    for (int i = 3; i * i <= 100000; i += 2)
        if (prime[i] == i)
            for (int j = i * i; j <= 100000; j += i)
                if (prime[j] == j)
                    prime[j] = i;
}

int main()
{
    int t, n;
    cin >> t;
    sieve();
    while (t--)
    {
        cin >> n;
        cout << (check(n) ? "YES" : "NO") << endl;
    }
    return 0;
}