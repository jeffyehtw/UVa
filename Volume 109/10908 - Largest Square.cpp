#include<iostream>

using namespace std;

int main()
{
	int t;
	while (cin >> t)
	{
		char arr[101][101];

		while (t--)
		{
			//input
			int m, n, q;
			cin >> m >> n >> q;
			cin.get();

			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
					cin.get(arr[i][j]);
				cin.get();
			}

			//output
			cout << m << " " << n;
			cout << " " << q << endl;

			while (q--)
			{
				int ans = 1;
				int a, b; cin >> a >> b;

				for(int i = 1; i < m + 1 || i < n + 1; i++)
				{
					int ok = true;

					for (int j = a - i; j < a + i + 1; j++)
					{
						for (int k = b - i; k < b + i + 1; k++)
						{
							if (j < 0 || k < 0
								|| j >= m || k >= n)
							{
								ok = false;
								break;
							}
							if (arr[j][k] != arr[a][b])
							{
								ok = false;
								break;
							}
						}
					}
					if (ok)
						ans += 2;
					else
						break;
				}
				cout << ans << endl;
			}
		}
	}
	return 0;
}