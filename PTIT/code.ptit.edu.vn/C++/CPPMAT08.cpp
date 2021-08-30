#include <bits/stdc++.h>
using namespace std;

void print(int arr[40][40], int n, int row, int col, int chieu)
{
    int time = 2;
    for (int i = 0; i < n; i++)
    {
        int t = time;
        while (t--)
        {
            cout << arr[row][col] << " ";
            row += chieu * 1;
        }
        if (row < 0 || col < 0 || row > n * 2 - 1 || col > n * 2 - 1)
            break;
        t = time;
        while (t--)
        {
            cout << arr[row][col] << " ";
            col += chieu * -1;
        }
        chieu = -chieu;
        time += 2;
    }
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        n *= 4;
        int arr[40][40];
        int x = 1;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                arr[i][j] = x++;
        print(arr, n / 2, n / 2, n / 2 - 1, -1);
        cout << endl;
        print(arr, n / 2, n / 2 - 1, n / 2, 1);
        cout << endl;
    }
    return 0;
}