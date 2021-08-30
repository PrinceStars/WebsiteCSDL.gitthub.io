#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        int key = arr[i], j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            swap(arr[j], arr[j + 1]);
            j--;
        }
        arr[j + 1] = key;

        cout << "Buoc " << i << ": ";
        for (int j = 0; j <= i; j++)
            cout << arr[j] << ' ';
        cout << '\n';
    }
    return 0;
}