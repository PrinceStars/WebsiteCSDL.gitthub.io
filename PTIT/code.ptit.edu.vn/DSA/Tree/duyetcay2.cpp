#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

int search(int arr[], int x, int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

void printPostOrder(int in[], int pre[], int n)
{
    int root = search(in, pre[0], n);

    if (root != 0)
        printPostOrder(in, pre + 1, root);

    if (root != n - 1)
        printPostOrder(in + root + 1, pre + root + 1, n - root - 1);

    cout << pre[0] << ' ';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int in[n];
        int lv[n];
        for (int i = 0; i < n; i++)
            cin >> in[i];
        for (int i = 0; i < n; i++)
            cin >> lv[i];
        printPostOrder(in, lv, n);
        cout << '\n';
    }
    return 0;
}