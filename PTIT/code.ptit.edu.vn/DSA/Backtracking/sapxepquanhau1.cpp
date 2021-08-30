#include <bits/stdc++.h>
using namespace std;
long res = 0;
bool check1[20] = {}, check2[20] = {}, col[20] = {};
int n;
void count(int i, int m)
{
	if (m == n)
	{
		res++;
		return;
	}
	for (int j = 0; j < n; j++)
	{
		if (!col[j] && !check1[i + j] && !check2[i - j + n - 1])
		{
			col[j] = 1;
			check1[i + j] = 1;
			check2[i - j + n - 1] = 1;
			count(i + 1, m + 1);
			col[j] = 0;
			check1[i + j] = 0;
			check2[i - j + n - 1] = 0;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		res = 0;
		memset(check1, 0, sizeof(check1));
		memset(check2, 0, sizeof(check2));
		memset(col, 0, sizeof(col));
		cin >> n;
		count(0, 0);
		cout << res << '\n';
	}
	return 0;
}