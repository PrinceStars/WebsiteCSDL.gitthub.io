#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    long c1, c2;
    cin >> c1 >> c2;
    long arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int j = 0; j < m; j++)
        cin >> arr2[j];
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    int i = 0, j = 0;
    int count = 0;
    ll mindif = abs(arr1[0] - arr2[0]);
    while (i < n && j < m)
    {
        ll dif = abs(arr1[i] - arr2[j]);
        if (dif == mindif)
            count++;
        else if (dif < mindif)
        {
            mindif = dif;
            count = 1;
        }
        ll op1 = abs(arr1[i + 1] - arr2[j]);
        ll op2 = abs(arr1[i] - arr2[j + 1]);
        if (op1 <= op2)
            i++;
        else
            j++;
    }
    cout << mindif + abs(c1 - c2) << ' ' << count;
    return 0;
}