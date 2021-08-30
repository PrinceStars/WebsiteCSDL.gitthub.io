#include <bits/stdc++.h>
using namespace std;

set<int> prime_list;

const int MAX = 1000001;

void preprocess()
{

    bool arr[MAX] = {};
    for (int i = 4; i < MAX; i += 2)
        arr[i] = 1;
    for (int i = 3; i * i < MAX; i += 2)
        for (int j = i * i; j < MAX; j += i)
            arr[j] = 1;
    prime_list.insert(2);
    for (int i = 3; i < MAX; i += 2)
        if (!arr[i])
            prime_list.insert(i);
}

void solve(int n)
{
    for (auto i : prime_list)
    {
        if (prime_list.find(n - i) != prime_list.end())
        {
            cout << i << ' ' << n - i << '\n';
            return;
        }
    }
    cout << "-1\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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