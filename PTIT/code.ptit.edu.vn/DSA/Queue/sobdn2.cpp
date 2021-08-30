#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<long long> St;
        St.push(1);
        while (!St.empty())
        {
            long long u = St.front();
            St.pop();
            if (u % n == 0)
            {
                cout << u << '\n';
                break;
            }
            St.push(u * 10);
            St.push(u * 10 + 1);
        }
    }
}