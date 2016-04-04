#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	while (cin >> n && n)
	{		
		int blank = 0;
		int min = 999;

		for (int i = 0; i < n; i++)
		{
			cin.get();
			string s; getline(cin, s);

			int temp = 0;
			for (int j = 0; j < s.size(); j++)
			{
				if (s[j] == ' ')
					temp++;
			}
			blank += temp;
			if (min > temp)
				min = temp;
		}
		cout << blank - min * n << endl;
	}
	return 0;
}