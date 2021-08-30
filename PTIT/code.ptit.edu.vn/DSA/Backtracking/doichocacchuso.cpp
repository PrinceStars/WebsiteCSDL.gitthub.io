#include <bits/stdc++.h>
using namespace std;
string find(string str, int i, int count, int k)
{
    if (count == k || i == str.length() - 1)
        return str;
    int index = i;
    for (int j = str.length() - 1; j > i; j--)
    {
        if (str[j] > str[index])
            index = j;
    }
    if (i != index)
    {
        swap(str[i], str[index]);
        return find(str, i + 1, count + 1, k);
    }
    return find(str, i + 1, count, k);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string number;
        cin >> number;
        cout << find(number, 0, 0, k) << '\n';
    }
    return 0;
}