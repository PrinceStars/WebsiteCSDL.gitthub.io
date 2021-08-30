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
        int max = 0, value;
        for (auto i : count)
        {
            if (i.second > max)
            {
                max = i.second;
                value = i.first;
            }
        }
        if (max > n / 2)
            cout << value << endl;
        else
            cout << "NO" << endl;
    }
}