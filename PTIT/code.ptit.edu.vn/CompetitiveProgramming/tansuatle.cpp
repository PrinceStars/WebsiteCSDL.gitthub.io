#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, int> count;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            count[x]++;
        }
        for (auto i : count)
        {
            if (i.second % 2)
            {
                cout << i.first << endl;
                break;
            }
        }
    }
}