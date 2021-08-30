#include <bits/stdc++.h>
using namespace std;
vector<long> ngto;

void sieve()
{
    bool arr[100001] = {};
    for (long i = 4; i <= 100000; i += 2)
        arr[i] = 2;
    for (long i = 3; i * i <= 100000; i += 2)
        if (arr[i] == 0)
            for (long j = i * i; j <= 100000; j += i)
                arr[j] = 1;
    ngto.push_back(2);
    for (long i = 3; i <= 100000; i += 2)
    {
        if (arr[i] == 0)
            ngto.push_back(i);
    }
}

void print(long long n)
{
    long dem = 0;
    long x = long(sqrt(n));
    for (auto i : ngto)
    {
        if (i > x)
            break;
        dem++;
    }
    cout << dem << endl;
}

int main()
{
    long long n;
    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        cin >> n;
        print(n);
    }
    return 0;
}