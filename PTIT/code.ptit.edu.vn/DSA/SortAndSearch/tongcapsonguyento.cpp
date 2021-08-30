#include <bits/stdc++.h>
using namespace std;

bool arr[1000001] = {1, 1};

void sieve()
{
    for (int i = 4; i <= 1000000; i += 2)
        arr[i] = 1;
    for (int i = 3; i * i <= 1000000; i += 2)
    {
        if (arr[i] == 0)
            for (int j = i * i; j <= 1000000; j += i)
                arr[j] = 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (!arr[n - 2])
            cout << 2 << ' ' << n - 2 << '\n';
        else
        {
            bool found = 0;
            for (int i = 3; i <= n / 2; i += 2)
                if (!arr[i] && !arr[n - i])
                {
                    cout << i << ' ' << n - i << '\n';
                    found = 1;
                    break;
                }
            if (!found)
                cout << "-1\n";
        }
    }
    return 0;
}