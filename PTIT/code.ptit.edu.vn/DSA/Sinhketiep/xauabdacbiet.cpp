#include <bits/stdc++.h>
using namespace std;

int k;
long total = 0;
vector<string> res;
void create(string a, string b, int i, int n, int c)
{
    // cout << a << '/' << b << '/' << c << '/' << '\n';
    if (i == n)
    {
        if (c == 1)
        {
            res.push_back(a);
            total++;
        }
    }
    else
    {
        string t;
        t = a + "A";
        // cout << b.length() << "?" << k - 1 << '\n';
        if (b.length() < k - 1)
            create(t, b + 'A', i + 1, n, c);
        else if (b.length() == k - 1)
            create(t, b + 'A', i + 1, n, c + 1);
        t = a + "B";
        create(t, "", i + 1, n, c);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // freopen("zinput.txt", "r", stdin);
    // freopen("zoutput.txt", "w", stdout);
    int n;
    cin >> n >> k;
    create("", "", 0, n, 0);
    cout << total << '\n';
    for (auto i : res)
        cout << i << '\n';

    return 0;
}