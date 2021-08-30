#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
map<int, int> Map;
string str1, str2;

void solve(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            int val1 = 0, val2 = 0;
            while (i < str.length() && isdigit(str[i]))
                val1 = val1 * 10 + str[i++] - 48;
            i += 3;
            while (i < str.length() && isdigit(str[i]))
                val2 = val2 * 10 + str[i++] - 48;
            Map[val2] += val1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, str1);
        getline(cin, str2);
        Map.clear();
        solve(str1);
        solve(str2);
        vector<pair<int, int>> res;
        for (auto i : Map)
            res.push_back(make_pair(i.first, i.second));
        for (int i = res.size() - 1; i > 0; i--)
            cout << res[i].second << "*x^" << res[i].first << " + ";
        cout << res[0].second << "*x^" << res[0].first << '\n';
    }
    return 0;
}