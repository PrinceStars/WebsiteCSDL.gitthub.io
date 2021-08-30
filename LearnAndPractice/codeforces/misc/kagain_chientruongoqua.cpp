#include <bits/stdc++.h>
using namespace std;

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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int Deque[n + 1] = {};
        int L[n], R[n];
        int top = 0;
        Deque[0] = -1;
        for (int i = 0; i < n; i++)
        {
            while (top > 0 && arr[Deque[top]] >= arr[i])
                --top;
            L[i] = Deque[top] + 1;
            Deque[++top] = i;
        }
        Deque[0] = n;
        top = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            while (top > 0 && arr[Deque[top]] >= arr[i])
                top--;
            R[i] = Deque[top] - 1;
            Deque[++top] = i;
        }
        int res = 0;
        int Lpo, Rpo;
        for (int i = 0; i < n; i++)
        {
            if (res < (R[i] - L[i] + 1) * arr[i])
            {
                res = (R[i] - L[i] + 1) * arr[i];
                Lpo = L[i] + 1;
                Rpo = R[i] + 1;
            }
        }
        cout << res << ' ' << Lpo << ' ' << Rpo << '\n';
    }
    return 0;
}