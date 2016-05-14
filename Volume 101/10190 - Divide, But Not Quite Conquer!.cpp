#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		if (n < 2 || m < 2)
			cout << "Boring!\n";
		else
		{
			vector<int> buffer;
			int temp = n;

			while (!(temp % m) && n > 1)
			{
				buffer.push_back(temp / m);
				temp /= m;
			}

			if (temp == 1)
			{
				printf("%d", n);
				for (int i = 0; i < buffer.size(); i++)
					printf(" %d", buffer[i]);
				printf("\n");
			}
			else
				cout << "Boring!\n";
		}
	}
	return 0;
}