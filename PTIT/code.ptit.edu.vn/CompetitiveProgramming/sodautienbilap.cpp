#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long x;
        map<long, pair<int, int>> arr;
        bool found = false;
        long res = INT_MAX, value;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr[x].first++;
            if (arr[x].first == 1)
                arr[x].second = i;
            if (arr[x].first > 1)
            {
                found = true;
                if (arr[x].second < res)
                {
                    res = arr[x].second;
                    value = x;
                }
            }
        }

        if (!found)
            cout << "NO" << endl;
        else
            cout << value << endl;
    }
    return 0;
}