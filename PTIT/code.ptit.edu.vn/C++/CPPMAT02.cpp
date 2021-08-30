#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        double arr[n][n], arr2[n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];

        for (int i = 0; i < n; i++)
            arr2[i] = arr[0][i];
        sort(arr2, arr2 + n);

        int size_pre = n;
        int j, k, size_cur;
        for (int i = 1; i < n; i++)
        {
            j = 0, k = 0, size_cur = 0;
            sort(arr[i], arr[i] + n);
            while (j < n && k < size_pre)
            {
                if (arr[i][j] < arr2[k])
                    j++;
                else if (arr2[k] < arr[i][j])
                    k++;
                else
                {
                    arr2[size_cur] = arr2[k];
                    size_cur++;
                    k++;
                    j++;
                }
            }
            size_pre = size_cur;
        }
        for (int i = 1; i < size_cur; i++)
            if (arr2[i] == arr2[i - 1])
                size_pre--;
        cout << size_pre << endl;
    }
    return 0;
}