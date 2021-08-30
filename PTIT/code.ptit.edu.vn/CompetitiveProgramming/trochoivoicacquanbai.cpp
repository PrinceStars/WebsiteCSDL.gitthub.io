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
        int a, b, c;
        cin >> a >> b >> c;
        int nimSum = a ^ b ^ c;
        if (nimSum == 0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }
}