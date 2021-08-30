#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

bool compare(pii a, pii b)
{
    return a.first - a.second < b.first - b.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<pii> products(n);
    for (int i = 0; i < n; i++)
        cin >> products[i].first;
    for (int i = 0; i < n; i++)
        cin >> products[i].second;
    sort(products.begin(), products.end(), compare);
    ll total = 0;
    int i = 0;
    while (products[i].first - products[i].second < 0)
        total += products[i++].first;
    while (i < k)
        total += products[i++].first;
    while (i < n)
        total += products[i++].second;
    // for (auto i : products)
    //     cout << i.first << '|' << i.second << ' ';
    cout << total;
    return 0;
}