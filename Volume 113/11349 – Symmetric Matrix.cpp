#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;

	while (cin >> n)
	{
		for (int i = 1; i < n + 1; i++)
		{
			//input
			string temp;
			cin >> temp >> temp;

			int p; cin >> p;

			long long m[101][101];

			for (int j = 0; j < p; j++)
			for (int k = 0; k < p; k++)
				cin >> m[j][k];

			//calculate
			bool ok = true;

			for (int j = 0; j < p; j++)
			{
				for (int k = 0; k < p; k++)
				{
					if (m[j][k] != m[p - 1 - j][p - 1 - k]
						|| m[j][k] < 0)
					{
						ok = false;
						break;
					}
				}
				if (!ok)
					break;
			}

			if (ok)
				cout << "Test #" << i << ": Symmetric.\n";
			else
				cout << "Test #" << i << ": Non-symmetric.\n";
		}
	}
	return 0;
}