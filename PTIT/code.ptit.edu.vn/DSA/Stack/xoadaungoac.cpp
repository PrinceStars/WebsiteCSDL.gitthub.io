#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

string str;
vector<pii> couple;
vector<string> res;
unordered_set<string> Set;
int n;

bool check(string str1)
{
    for (int i = 0; i < str1.length() - 1; i++)
    {
        if (str1[i] == '/' && str1[i + 1] == '0')
            return false;
    }
    return true;
}

void printresult(int i)
{
    if (i == n)
    {
        string temp = "";
        for (int i = 0; i < str.length(); i++)
            if (str[i] != 'a')
                temp += str[i];
        if (Set.find(temp) == Set.end() && check(temp))
        {
            Set.insert(temp);
            res.push_back(temp);
        }
        return;
    }
    printresult(i + 1);

    str[couple[i].first] = 'a';
    str[couple[i].second] = 'a';
    printresult(i + 1);
    str[couple[i].first] = '(';
    str[couple[i].second] = ')';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> str;
    stack<int> id;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
            id.push(i);
        else if (str[i] == ')')
        {
            couple.push_back({id.top(), i});
            id.pop();
        }
    }
    n = couple.size();
    printresult(0);
    sort(res.begin(), res.end());
    for (int i = 1; i < res.size(); i++)
        cout << res[i] << '\n';
    return 0;
}