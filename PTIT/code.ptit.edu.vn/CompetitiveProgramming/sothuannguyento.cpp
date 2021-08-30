#include <bits/stdc++.h>
using namespace std;

bool sumprime[82] = {};

bool checkprime(long a)
{
    if (a < 2)
        return false;
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0)
            return false;
    return true;
}

void sieve()
{
    for (int i = 0; i < 82; i++)
        sumprime[i] = checkprime(i);
}

bool checkdigitandsum(long a)
{
    string number = to_string(a);
    long sum = 0;
    for (int i = 0; i < number.length(); i++)
    {
        char temp = number[i];
        if (temp == '2' || temp == '3' || temp == '5' || temp == '7')
            sum += temp - 48;
        else
            return false;
    }

    return sumprime[sum];
}

int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        long a, b, count = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
            if (checkdigitandsum(i) && checkprime(i))
                count++;
        cout << count << endl;
    }
    return 0;
}