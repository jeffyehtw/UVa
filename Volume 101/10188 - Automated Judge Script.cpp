#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	int counter = 1;

	while (cin >> n && n)
	{
		cin.get();

		string input;
		string ans;
		string buffer;

		for (int i = 0; i < n; i++)
		{
			getline(cin, buffer);
			if (i)
			{
				ans += "\n";
				ans += buffer;
			}
			else
				ans = buffer;
		}

		int m; cin >> m;
		cin.get();

		for (int i = 0; i < m; i++)
		{
			getline(cin, buffer);
			if (i)
			{
				input += "\n";
				input += buffer;
			}
			else
				input = buffer;
		}

		bool ac = (ans == input);
		bool pe = true;

		cout << "Run #" << counter++ << ": ";

		if (ac)
			cout << "Accepted\n";
		else
		{
			for (int i = 0; i < ans.length(); i++)
			{
				if (!isdigit(ans[i]))
				{
					ans.erase(i, 1);
					i--;
				}
			}
			for (int i = 0; i < input.length(); i++)
			{
				if (!isdigit(input[i]))
				{
					input.erase(i, 1);
					i--;
				}
			}
			
			int max_index = max(m, n);

			pe = (ans == input);
		
			if (pe)
				cout << "Presentation Error\n";
			else
				cout << "Wrong Answer\n";
		}	
	}
	return 0;
}