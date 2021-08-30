#include <bits/stdc++.h>
#define MAX 10000
using namespace std;

vector<int> prime;

void sieve()
{
    bool arr[MAX] = {};
    for (int i = 2; i * i <= MAX; i++)
    {
        if (arr[i] == 0)
            for (int j = i * i; j <= MAX; j += i)
                arr[j] = 1;
    }

    for (int i = 2; i <= MAX; i++)
        if (arr[i] == 0)
            prime.push_back(i);
}

long long LCM(int n)
{
    long long lcm = 1;
    for (int i = 0; i < prime.size() && prime[i] <= n; i++)
    {
        int pp = prime[i];
        while (pp * prime[i] <= n)
            pp = pp * prime[i];

        lcm *= pp;
    }
    return lcm;
}

int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        cout << LCM(n) << endl;
    }
    return 0;
}