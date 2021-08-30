#include <bits/stdc++.h>
using namespace std;

string tobin(int n)
{
    string res = "";
    while (n)
    {
        res += n % 2 + 48;
        n /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        n = stoll(tobin(n));
        queue<long long> St;
        St.push(1);
        while (!St.empty() && St.front() <= n)
        {
            long long u = St.front();
            St.pop();
            cout << u << ' ';
            St.push(u * 10);
            St.push(u * 10 + 1);
        }
        cout << '\n';
    }
    return 0;
}