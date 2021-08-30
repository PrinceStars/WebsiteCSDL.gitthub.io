#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m;
int arr[500][500];
int island_counter = 0;

void find(int i, int j)
{
    if (arr[i][j])
    {
        arr[i][j] = 0;
        if (j > 0)
            find(i, j - 1);
        if (j < m - 1)
            find(i, j + 1);
        if (i > 0)
        {
            if (j > 0)
                find(i - 1, j - 1);
            find(i - 1, j);
            if (j < m - 1)
                find(i - 1, j + 1);
        }
        if (i < n - 1)
        {
            if (j > 0)
                find(i + 1, j - 1);
            find(i + 1, j);
            if (j < m - 1)
                find(i + 1, j + 1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        island_counter = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (arr[i][j])
                {
                    island_counter++;
                    find(i, j);
                }

        cout << island_counter << '\n';
    }
    return 0;
}