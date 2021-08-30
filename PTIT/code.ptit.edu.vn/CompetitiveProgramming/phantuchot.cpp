#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

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
        for (int i = n - 2; i >= 0; i--)
            minR[i] = min(minR[i + 1], arr[i]);

        int res = 0;
        if (arr[0] < minR[1])
            res++;
        if (arr[n - 1] >= maxL[n - 2])
            res++;
        for (int i = 1; i < n - 1; i++)
            if (arr[i] >= maxL[i - 1] && arr[i] < minR[i + 1])
                res++;
        cout << res << '\n';
    }
    return 0;
}