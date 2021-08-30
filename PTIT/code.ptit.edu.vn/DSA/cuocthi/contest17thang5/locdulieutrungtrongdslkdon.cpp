#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    unordered_set<int> Hash;
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (Hash.find(x) == Hash.end())
        {
            res.push_back(x);
            Hash.insert(x);
        }
    }
    for (auto i : res)
        cout << i << ' ';
    return 0;
}