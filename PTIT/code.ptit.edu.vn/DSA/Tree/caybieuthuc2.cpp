#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string str;
        cin >> ws;
        getline(cin, str);
        istringstream sc(str);
        vector<string> idx;
        while (sc >> str)
            idx.push_back(str);
        queue<int> res;
        for (int i = idx.size() - 1; i >= 0; i--)
        {
            if (idx[i] == "+")
            {
                int sum = res.front();
                res.pop();
                sum = res.front() + sum;
                res.pop();
                res.push(sum);
            }
            else if (idx[i] == "-")
            {
                int sum = res.front();
                res.pop();
                sum = res.front() - sum;
                res.pop();
                res.push(sum);
            }
            else if (idx[i] == "*")
            {
                int sum = res.front();
                res.pop();
                sum = res.front() * sum;
                res.pop();
                res.push(sum);
            }
            else if (idx[i] == "/")
            {
                int sum = res.front();
                res.pop();
                sum = res.front() / sum;
                res.pop();
                res.push(sum);
            }
            else
            {
                int sum = 0;
                for (auto it : idx[i])
                    sum = sum * 10 + (it - '0');
                res.push(sum);
            }
        }
        cout << res.front() << endl;
    }
    return 0;
}