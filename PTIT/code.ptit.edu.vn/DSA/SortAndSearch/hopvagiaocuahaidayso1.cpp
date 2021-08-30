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
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        vector<int> Union(n + m), Intersection(n + m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        auto it = set_union(a, a + n, b, b + m, Union.begin());
        Union.resize(it - Union.begin());

        for (auto i : Union)
            cout << i << ' ';
        cout << '\n';

        it = set_intersection(a, a + n, b, b + n, Intersection.begin());
        Intersection.resize(it - Intersection.begin());

        for (auto i : Intersection)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}