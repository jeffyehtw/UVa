#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		cin.get();
		for (int i = 0; i < n; i++)
		{
			char c[200];
			int num[200], index = 0;
			while (1)
			{
				cin.get(c[index]);
				if (c[index] == '\n')
					break;
				cin >> num[index];
				index++;
			}
			cout << "Case " << i + 1 << ": ";
			for (int j = 0; j < index; j++)
				for (int k = 0; k < num[j]; k++)
					cout << c[j];
			cout << endl;
		}
	}
	return 0;
}