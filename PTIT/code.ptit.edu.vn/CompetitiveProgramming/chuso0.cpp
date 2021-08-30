#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll p, ll n)
{
    ll temp = p, count = 0, f = 5;
    while (f <= temp)
    {
        count += temp / f;
        f = f * 5;
    }
    return (count >= n);
}

ll findNum(ll n)
{
    if (n == 1)
        return 5;
    ll low = 0;
    ll high = 5 * n;
    while (low < high)
    {
        ll mid = (low + high) >> 1;
        if (check(mid, n))
            high = mid;
        else
            low = mid + 1;
    }
    return low;
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
        cout << findNum(n) << '\n';
    }
    return 0;
}
