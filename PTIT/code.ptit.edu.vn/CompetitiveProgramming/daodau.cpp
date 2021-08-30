#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    long arr[n];
    long min_value = LONG_MAX;
    long long sum = 0;
    vector<long> negative;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
            negative.push_back(arr[i]);
        sum += arr[i];
        min_value = min(abs(arr[i]), min_value);
    }
    sort(negative.begin(), negative.end());
    for (auto i : negative)
    {
        sum += 2 * (-i);
        k--;
        if (!k)
            break;
    }
    if (!(k % 2))
        cout << sum << '\n';
    else
        cout << sum - min_value * 2 << '\n';

    return 0;
}