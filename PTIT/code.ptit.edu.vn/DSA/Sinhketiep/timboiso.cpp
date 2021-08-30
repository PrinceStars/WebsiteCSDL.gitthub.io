#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<long> Q;
        Q.push(9);
        while (!Q.empty())
        {
            long temp = Q.front();
            Q.pop();
            if (!(temp % n))
            {
                cout << temp << '\n';
                break;
            }
            Q.push(temp * 10);
            Q.push(temp * 10 + 9);
        }
    }
    return 0;
}