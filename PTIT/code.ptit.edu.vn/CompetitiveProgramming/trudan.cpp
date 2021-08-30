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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int nimSum = a[0] % (b[0] + 1);
        for (int i = 1; i < n; i++)
            nimSum = nimSum ^ (a[i] % (b[i] + 1));
        if (nimSum == 0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }
}