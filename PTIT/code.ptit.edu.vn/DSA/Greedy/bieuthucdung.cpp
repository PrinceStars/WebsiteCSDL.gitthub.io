#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        vector<int> close, open;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ']')
            {
                if (!open.empty())
                    open.pop_back();
                else
                    close.push_back(i);
            }
            else
                open.push_back(i);
        }

        int res = 0;
        for (int i = 0; i < close.size(); i++)
            res += open[i] - close[i];

        cout << res << '\n';
    }
    return 0;
}