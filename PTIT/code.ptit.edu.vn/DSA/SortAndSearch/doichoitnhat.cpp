#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int res = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int key = arr[i], index = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < key)
                {
                    key = arr[j];
                    index = j;
                }
            }
            if (i != index)
            {
                swap(arr[i], arr[index]);
                res++;
            }
        }
        cout << res << '\n';
    }
    return 0;
}