#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
const int MAX = 1e6 + 1;
bool prime[MAX] = {};
vector<int> prime_num;

void preprocess()
{
    for (int i = 4; i < MAX; i += 2)
        prime[i] = 1;
    for (int i = 3; i * i < MAX; i += 2)
        for (int j = i * i; j < MAX; j += i)
            prime[j] = 1;
    prime_num.push_back(2);
    for (int i = 3; i < MAX; i += 2)
        if (!prime[i])
            prime_num.push_back(i);
}

void solve(int n)
{
    for (int i = 0; i < prime_num.size() && prime_num[i] <= n / 2; i++)
    {
        if (prime[n - prime_num[i]] == 0)
        {
            cout << prime_num[i] << ' ' << n - prime_num[i] << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    preprocess();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}