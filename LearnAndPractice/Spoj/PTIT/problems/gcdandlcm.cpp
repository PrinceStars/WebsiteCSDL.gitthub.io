#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    long long a, b;
    do
    {
        cin >> a >> b;
        long long Gcd = gcd(a, b);
        cout << Gcd << " " << a * b / Gcd << endl;
    } while (a != 0 && b != 0);
    return 0;
}