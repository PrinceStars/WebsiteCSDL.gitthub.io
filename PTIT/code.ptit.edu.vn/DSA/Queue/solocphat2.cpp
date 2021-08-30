#include <bits/stdc++.h>
using namespace std;

long long count(int n)
{
    long long res = 0;
    long long temp = 1;
    for (int i = 1; i <= n; i++)
    {
        res += temp * 2;
        temp *= 2;
    }
    return res;
}

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
        cout << count(n) << '\n';
        while (!Q.empty())
        {
            string str = Q.front();
            Q.pop();
            if (str.length() > n)
                break;
            cout << str << ' ';
            Q.push(str + "6");
            Q.push(str + "8");
        }
        cout << '\n';
    }
    return 0;
}