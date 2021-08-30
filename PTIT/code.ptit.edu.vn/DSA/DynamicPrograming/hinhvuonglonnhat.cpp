#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("zinput.txt", "r", stdin);
    // freopen("zoutput.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m], L[n][m], R[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] && i && arr[i - 1][j])
                    arr[i][j] += arr[i - 1][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            int top = 0;
            int D[m] = {-1};
            for (int j = 0; j < m; j++)
            {
                while (top > 0 && arr[i][D[top]] >= arr[i][j])
                    top--;
                L[i][j] = D[top] + 1;
                D[++top] = j;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int top = 0;
            int D[m] = {m};
            for (int j = m - 1; j >= 0; j--)
            {
                while (top > 0 && arr[i][D[top]] >= arr[i][j])
                    top--;
                R[i][j] = D[top] - 1;
                D[++top] = j;
            }
        }
        int res = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                res = max(res, min(arr[i][j], R[i][j] - L[i][j] + 1));
        cout << res << '\n';
    }
    return 0;
}