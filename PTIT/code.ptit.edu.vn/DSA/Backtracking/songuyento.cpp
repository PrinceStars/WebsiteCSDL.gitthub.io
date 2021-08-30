#include <bits/stdc++.h>
using namespace std;

vector<int> prime;
vector<string> res;
int n, p, s;

void sieve()
{
    bool arr[201] = {1, 1};
    for (int i = 4; i <= 200; i += 2)
        arr[i] = 1;
    for (int i = 3; i * i <= 200; i += 2)
        for (int j = i * i; j <= 200; j += i)
            arr[j] = 1;
    prime.push_back(2);
    for (int i = 3; i <= 200; i += 2)
        if (!arr[i])
            prime.push_back(i);
}

void print()
{
    cout << res.size() << '\n';
    for (auto i : res)
        cout << i << '\n';
}

void find(string str, int i, int k, int sum)
{
    // cout << str << ": " << sum << '|';
    if (i == n && sum == s)
        res.push_back(str);
    for (int j = k; prime[j] < s; j++)
    {
        if (sum + prime[j] <= s)
            find(str + to_string(prime[j]) + " ", i + 1, j + 1, sum + prime[j]);
        else
            break;
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
        int k = 0;
        res.clear();
        cin >> n >> p >> s;
        while (prime[k] < p)
            k++;
        k++;
        find("", 0, k, 0);
        print();
    }
    return 0;
}