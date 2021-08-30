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
        int L, R;
        cin >> L >> R;
        queue<string> Q;
        Q.push("1");
        Q.push("2");
        Q.push("3");
        Q.push("4");
        Q.push("5");
        int count = 0;
        while (!Q.empty())
        {
            string u = Q.front();
            bool check[6] = {};
            for (int i = 0; i < u.length(); i++)
                check[u[i] - 48] = 1;
            Q.pop();
            int temp = stoi(u);
            if (temp >= L)
            {
                if (temp <= R)
                {
                    // cout << u << ' ';
                    count++;
                }
                else
                    break;
            }
            for (int i = 0; i <= 5; i++)
                if (!check[i])
                    Q.push(u + char(i + 48));
        }
        cout << count << '\n';
    }
    return 0;
}