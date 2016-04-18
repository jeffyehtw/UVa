#include<iostream>

using namespace std;

int main()
{
	int first[10] = { 0, 1, 3, 6, 10,
					15, 21, 28, 36, 45 };

	int n;
	while (cin >> n && n)
	{
		while (n--)
		{
			int brick[45] = { -1 };

			//level i
			for (int i = 0; i < 9; i += 2)
			{
				for (int j = 0; j < i + 1; j += 2)
				{
					cin >> brick[first[i] + j];
				}
			}

			//level 8
			for (int i = 37; i < 45; i += 2)
			{
				//sibling
				int l = brick[i - 1];
				int r = brick[i + 1];

				//grandparent
				int g = brick[i - 16];

				brick[i] = (g - r - l) / 2;
			}

			for (int i = 7; i > -1; i--)
			{
				for (int j = first[i]; j < first[i + 1]; j++)
				{
					//child
					int l = brick[j + i + 1];
					int r = brick[j + i + 2];

					brick[j] = l + r;
				}
			}

			for (int i = 0; i < 9; i++)
			{
				for (int j = first[i]; j < first[i + 1]; j++)
				{
					cout << brick[j];

					if (j < first[i + 1] - 1)
						cout << " ";
				}
				cout << endl;
			}
		}
	}
	return 0;
}