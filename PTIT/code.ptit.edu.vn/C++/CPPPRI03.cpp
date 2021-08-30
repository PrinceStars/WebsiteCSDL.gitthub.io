#include <bits/stdc++.h>
using namespace std;
int arr[10001] = {};
vector<int> ngto;

void Sieve()
{
    for (int i = 2; i * i <= 10000; i++)
        if (arr[i] == 0)
            for (int j = i * i; j <= 10000; j += i)
                arr[j] = 1;

    for (int i = 2; i <= 10000; i++)
        if (arr[i] == 0)
            ngto.push_back(i);
}

void prime(int x)
{
    int i = 0;
    while (ngto[i] <= x && ngto[i] != 0)
        cout << ngto[i++] << " ";

    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t, x;
    cin >> t;
    Sieve();
    while (t--)
    {
        cin >> x;
        prime(x);
    }
    return 0;
}