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
        long n;
        cin >> n;
        long arr[n + 1] = {-1};
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        int nGreater[n + 1] = {0}, rSmaller[n + 1] = {0};
        stack<int> D;
        for (int i = n; i >= 1; i--)
        {
            while (D.size() > 0 && arr[D.top()] >= arr[i])
                D.pop();
            if (D.empty())
                rSmaller[i] = 0;
            else
                rSmaller[i] = D.top();
            D.push(i);
        }

        while (!D.empty())
            D.pop();

        for (int i = n; i >= 1; i--)
        {
            while (D.size() > 0 && arr[D.top()] <= arr[i])
                D.pop();
            if (D.empty())
                nGreater[i] = 0;
            else
                nGreater[i] = D.top();
            D.push(i);
        }

        for (int i = 1; i <= n; i++)
            cout << arr[rSmaller[nGreater[i]]] << ' ';
        cout << '\n';
    }
    return 0;
}