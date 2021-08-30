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
        vector<int> arr;
        for (int i = 0; i < n * m; i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Pq;

        int res[n * m];
        for (int i = 0; i < n * m; i++)
            res[i] = INT_MAX;
        res[0] = arr[0];
        Pq.push(make_pair(res[0], 0));

        while (Pq.size())
        {
            pair<int, int> temp = Pq.top();
            Pq.pop();

            int vertex = temp.second;
            int weight = temp.first;
            if (vertex + 1 < (vertex / m + 1) * m)
                if (arr[vertex + 1] + weight < res[vertex + 1])
                {
                    res[vertex + 1] = arr[vertex + 1] + weight;
                    Pq.push(make_pair(res[vertex + 1], vertex + 1));
                }
            if (vertex - 1 >= vertex / m * m)
                if (arr[vertex - 1] + weight < res[vertex - 1])
                {
                    res[vertex - 1] = arr[vertex - 1] + weight;
                    Pq.push(make_pair(res[vertex - 1], vertex - 1));
                }
            if (vertex + m < n * m)
                if (arr[vertex + m] + weight < res[vertex + m])
                {
                    res[vertex + m] = arr[vertex + m] + weight;
                    Pq.push(make_pair(res[vertex + m], vertex + m));
                }
            if (vertex - m >= 0)
                if (arr[vertex - m] + weight < res[vertex - m])
                {
                    res[vertex - m] = arr[vertex - m] + weight;
                    Pq.push(make_pair(res[vertex - m], vertex - m));
                }
        }
        cout << res[n * m - 1] << '\n';
    }
    return 0;
}
