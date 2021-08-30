#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000
vector<int> ngto;

void sieve()
{
    bool arr[MAX + 1] = {};
    for (long i = 2; i * i <= MAX; i++)
        if (arr[i] == 0)
            for (long j = i * i; j <= MAX; j += i)
                arr[j] = 1;
    for (long i = 2; i <= MAX; i++)
        if (arr[i] == 0)
            ngto.push_back(i);
}

void prime(int n)
{
    for (int i = 0; i < ngto.size() && ngto[i] * ngto[i] <= n; i++)
        cout << ngto[i] * ngto[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    sieve();

    while (t--)
    {
        int n;
        cin >> n;
        prime(n);
    }
}