#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0, y = 0;
    int dir = 1; // 1 bac 2 nam 3 dong 4 tay
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if (dir == 1)
        {
            if (str[i] == 'G')
                y++, dir = 1;
            else if (str[i] == 'L')
                x--, dir = 4;
            else if (str[i] == 'R')
                x++, dir = 3;
            else
                y--, dir = 2;
        }
        else if (dir == 2)
        {
            if (str[i] == 'G')
                y--, dir = 2;
            else if (str[i] == 'L')
                x++, dir = 3;
            else if (str[i] == 'R')
                x--, dir = 4;
            else
                y++, dir = 1;
        }
        else if (dir == 3)
        {
            if (str[i] == 'G')
                x++, dir = 3;
            else if (str[i] == 'L')
                y++, dir = 1;
            else if (str[i] == 'R')
                y--, dir = 2;
            else
                x--, dir = 4;
        }
        else
        {
            if (str[i] == 'G')
                x--, dir = 4;
            else if (str[i] == 'L')
                y--, dir = 2;
            else if (str[i] == 'R')
                y++, dir = 1;
            else
                x++, dir = 3;
        }
    }
    cout << x << " " << y;
    return 0;
}