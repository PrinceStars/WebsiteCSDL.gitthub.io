#include <bits/stdc++.h>
using namespace std;

vector<int> ngto;

void prime(int n)
{
    while (n % 2 == 0)
    {
        ngto.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            ngto.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        ngto.push_back(n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ngto.clear();
        int n, k;
        cin >> n >> k;
        prime(n);
        if (k > ngto.size())
            cout << "-1" << endl;
        else
            cout << ngto[k - 1] << endl;
    }
}