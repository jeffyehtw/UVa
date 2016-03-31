#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while (cin >> n && (n && n < 13))
	{
		cin.get();
		vector<int> blank;	
		while (n--)
		{
			string s; getline(cin, s);

			int temp = 0;
			for (int i = 0; i < s.length(); i++)
			{
				if (s[i] == 'X')
					temp++;
			}
			blank.push_back(25 - temp);
		}
		sort(blank.begin(), blank.end());

		int total = 0;
		for (int i = 0; i < blank.size() - 1; i++)
		{
			total += blank[blank.size() - 1] - blank[i];
		}
		cout << total << endl;
	}
	return 0;
}