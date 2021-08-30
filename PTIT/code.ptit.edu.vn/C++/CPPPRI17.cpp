#include <bits/stdc++.h>
using namespace std;
vector<long> ngto;

void sieve()
{
    bool arr[1000001] = {};
    for (long i = 4; i <= 1000000; i += 2)
        arr[i] = 2;
    for (long i = 3; i * i <= 1000000; i += 2)
        if (arr[i] == 0)
            for (long j = i * i; j <= 1000000; j += i)
                arr[j] = 1;
    ngto.push_back(2);
    for (long i = 3; i <= 1000000; i += 2)
    {
        if (arr[i] == 0)
            ngto.push_back(i);
    }
}

void print(long long l, long long r)
{
    int dem = 0;
    r = sqrt(r);
    l = sqrt(l);
    for (auto i : ngto)
    {
        if (i > l && i <= r)
            dem++;
        if (i > r)
            break;
    }
    cout << dem << endl;
}

int main()
{
    long long l, r;
    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        cin >> l >> r;
        print(l, r);
    }
    return 0;
}