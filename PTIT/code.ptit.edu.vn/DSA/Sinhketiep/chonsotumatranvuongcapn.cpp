#include <bits/stdc++.h>
using namespace std;
vector<string> res;
bool marked_col[10] = {};
int n, k;
int arr[10][10];

void print()
{
    cout << res.size() << '\n';
    for (auto i : res)
        cout << i << '\n';
}

void find(string str, int i, int sum)
{
    if (i == n && sum == k)
        res.push_back(str);
    for (int j = 0; j < n; j++)
    {
        if (!marked_col[j])
        {
            marked_col[j] = 1;
            find(str + char(j + 1 + 48) + ' ', i + 1, sum + arr[i][j]);
            marked_col[j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    find("", 0, 0);
    print();
    return 0;
}