#include <bits/stdc++.h>
using namespace std;
bool arr[11] = {};

void create(string a, int i, int n)
{
    for (int j = 1; j <= n; j++)
    {
        string b;
        if (arr[j] == 0)
        {
            b = a + to_string(j);
            arr[j] = 1;
            if (i == n)
                cout << b << ' ';
            else
                create(b, i + 1, n);
            arr[j] = 0;
        }
    }
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
        create("", 1, n);
        cout << '\n';
    }
    return 0;
}