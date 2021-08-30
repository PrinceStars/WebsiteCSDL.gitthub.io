#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

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
        int arr[n], frequency[n];
        unordered_map<int, int> Umap;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            Umap[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
            frequency[i] = Umap[arr[i]];
        int L[n];
        stack<int> St;
        St.push(n);
        for (int i = n - 1; i >= 0; i--)
        {
            while (St.size() > 1 && frequency[St.top()] <= frequency[i])
                St.pop();
            L[i] = St.top();
            St.push(i);
        }
        for (int i = 0; i < n; i++)
            if (L[i] == n)
                cout << "-1 ";
            else
                cout << arr[L[i]] << ' ';
        cout << '\n';
    }
    return 0;
}