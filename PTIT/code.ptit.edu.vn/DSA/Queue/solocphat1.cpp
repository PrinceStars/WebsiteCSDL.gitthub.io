#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<string> Q;
        Q.push("6");
        Q.push("8");
        vector<string> V;
        while (!Q.empty())
        {
            string str = Q.front();
            Q.pop();
            if (str.length() > n)
                break;
            V.push_back(str);
            Q.push(str + "6");
            Q.push(str + "8");
        }
        for (auto i = V.rbegin(); i != V.rend(); i++)
            cout << *i << ' ';
        cout << '\n';
    }
    return 0;
}