#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long arr[n];
    multiset<long> odd, even;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i += 2)
        odd.insert(arr[i]);
    for (int i = 1; i < n; i += 2)
        even.insert(arr[i]);
    auto i = odd.begin();
    auto j = even.rbegin();
    while (i != odd.end() && j != even.rend())
    {
        cout << *i << " " << *j << " ";
        i++, j++;
    }
    if (i != odd.end())
        cout << *i << endl;
    return 0;
}