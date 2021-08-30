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
        long long P, Q;
        cin >> P >> Q;
        while (Q % P)
        {
            long long temp = Q / P + 1;
            cout << "1/" << temp << " + ";
            P = P * temp - Q;
            Q *= temp;
        }
        cout << "1/" << Q / P << "\n";
    }

    return 0;
}