#include <bits/stdc++.h>
using namespace std;
bool check[10];
vector<char> arr;

void create(string a, int i, int n)
{
    for (int j = 0; j < arr.size(); j++)
    {
        if (check[j] == 0)
        {
            string b;
            b = a + arr[j];
            check[j] = 1;
            if (i == n)
                cout << b << ' ';
            else
                create(b, i + 1, n);
            check[j] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        arr.clear();
        string str;
        cin >> str;
        for (int i = 0; i < str.length(); i++)
            arr.push_back(str[i]);

        create("", 1, str.length());
        cout << '\n';
    }
    return 0;
}