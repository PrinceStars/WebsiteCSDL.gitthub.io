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
        int k;
        cin >> k;
        string s;
        cin >> s;
        int dem[300] = {}, Max = 0;
        for (int i = 0; i < s.length(); i++)
        {
            dem[s[i]]++;
            Max = max(Max, dem[s[i]]);
        }
        if ((Max - 1) * (k - 1) > s.length() - Max)
            cout << "-1\n";
        else
            cout << "1\n";
    }
    return 0;
}