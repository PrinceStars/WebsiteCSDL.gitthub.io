#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        str1.assign(6, ' ');
        str2.assign(6, ' ');
        for (int i = 0; i < 6; i++)
            cin >> str1[i];
        for (int i = 0; i < 6; i++)
            cin >> str2[i];
        queue<pair<string, int>> Q;
        unordered_set<string> Uset;
        Q.push({str1, 0});
        while (Q.size())
        {
            pair<string, int> u = Q.front();
            Q.pop();

            string op1 = u.first, op2 = u.first;
            int time = u.second;

            if (op1 == str2)
            {
                cout << time << '\n';
                break;
            }

            char temp = op1[0];
            op1[0] = op1[3];
            op1[3] = op1[4];
            op1[4] = op1[1];
            op1[1] = temp;

            temp = op2[1];
            op2[1] = op2[4];
            op2[4] = op2[5];
            op2[5] = op2[2];
            op2[2] = temp;

            if (Uset.find(op1) == Uset.end())
            {
                Uset.insert(op1);
                Q.push({op1, time + 1});
            }

            if (Uset.find(op2) == Uset.end())
            {
                Uset.insert(op2);
                Q.push({op2, time + 1});
            }
        }
    }
    return 0;
}