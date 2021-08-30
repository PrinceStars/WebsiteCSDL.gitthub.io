#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int i, j;
    long sum;
    node(int i, int j, long sum)
    {
        this->i = i;
        this->j = j;
        this->sum = sum;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int arr[n][n];
        long count = 0;
        queue<node> BFS;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];

        node first(0, 0, arr[0][0]);
        BFS.push(first);
        if (n == 1 && arr[0][0] == k)
            count++;
        else
            while (BFS.size())
            {
                int i = BFS.front().i, j = BFS.front().j;
                long pre_sum = BFS.front().sum, cur_sum;
                BFS.pop();
                if (i + 1 < n)
                {
                    cur_sum = pre_sum + arr[i + 1][j];
                    if (j == n - 1 && i + 1 == n - 1 && cur_sum == k)
                        count++;
                    if (cur_sum < k)
                    {
                        node choice1(i + 1, j, cur_sum);
                        BFS.push(choice1);
                        // cout << "c1:" << choice1.sum << " ";
                    }
                }
                if (j + 1 < n)
                {
                    cur_sum = pre_sum + arr[i][j + 1];
                    if (j + 1 == n - 1 && i == n - 1 && cur_sum == k)
                        count++;
                    if (cur_sum < k)
                    {
                        node choice2(i, j + 1, cur_sum);
                        BFS.push(choice2);
                        // cout << "c2:" << choice2.sum << " ";
                    }
                }
                // cout << "...";
            }
        cout << count << endl;
    }
    return 0;
}