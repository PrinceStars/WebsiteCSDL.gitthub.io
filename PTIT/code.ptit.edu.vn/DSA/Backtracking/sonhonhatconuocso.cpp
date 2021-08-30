#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
vector<int> res;
ll result = LLONG_MAX;
int prime[18] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61};
int n;

ll pow(int m, int n)
{
    if (n == 1)
        return n;
    ll t = pow(m, n / 2);
    return n % 2 ? t * t * m : t * t;
}

void solve(int i)
{
    if (i >= 18)
        return;
    if (n < 64)
    {
        for (auto it : res)
            cout << it << ' ';
        ll temp = pow(2, n - 1);
        for (int j = 0; j < res.size(); j++)
            temp += pow(prime[j + 1], res[j] - 1);
        result = min(temp, result);
    }
    if (!(n % prime[i]))
    {
        ll x = prime[i];
        int m = n;
        while (!(m % prime[i]))
        {
            res.push_back(x);
            n /= prime[i];
            solve(i);
            res.pop_back();
            n *= prime[i];
            m /= prime[i];
            x *= prime[i];
        }
    }
    else
        solve(i + 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve(0);
        cout << result << '\n';
    }
    return 0;
}