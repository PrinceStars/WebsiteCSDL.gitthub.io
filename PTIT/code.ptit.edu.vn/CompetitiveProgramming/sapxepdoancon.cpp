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
        long arr[n], maxL[n], minR[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        maxL[0] = arr[0];
        for (int i = 1; i < n; i++)
            maxL[i] = max(maxL[i - 1], arr[i]);
        minR[n - 1] = arr[n - 1];
        int K = 0;
        for (int i = n - 2; i > 0; i--)
        {
            minR[i] = min(minR[i + 1], arr[i]);
            if (maxL[i - 1] <= minR[i])
                K++;
        }
        if (maxL[n - 2] <= minR[n - 1])
            K++;
        cout << K << '\n';
        for (int i = 0; i <= n - 2; i++)
            if (maxL[i] <= minR[i + 1])
                cout << i + 1 << ' ';
        cout << '\n';
    }
    return 0;
}