#include <bits/stdc++.h>
using namespace std;
char c[2] = {'A', 'B'};

void create(string a, int i, int n)
{
    for (int j = 0; j < 2; j++)
    {
        string b = a + c[j];
        if (i == n - 1)
            cout << b << " ";
        else
            create(b, i + 1, n);
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
        create("", 0, n);
        cout << '\n';
    }
    return 0;
}