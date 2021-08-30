#include <bits/stdc++.h>
using namespace std;

set<long long> perfectnumber = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};

int main()
{
    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (perfectnumber.find(n) != perfectnumber.end())
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}