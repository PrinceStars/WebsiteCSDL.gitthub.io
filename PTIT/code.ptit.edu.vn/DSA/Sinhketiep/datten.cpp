#include <bits/stdc++.h>
using namespace std;
int arr[16] = {};

void print(int n)
{
    for (int i = 1; i <= n; i++)
        cout << char(arr[i] + 64);
    cout << '\n';
}
void create(int i, int n, int k)
{
    for (int j = arr[i - 1] + 1; j <= n - k + i; j++)
    {
        arr[i] = j;
        if (i == k)
            print(k);
        else
            create(i + 1, n, k);
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
        int n, k;
        cin >> n >> k;
        create(1, n, k);
        cout << '\n';
    }
    return 0;
}