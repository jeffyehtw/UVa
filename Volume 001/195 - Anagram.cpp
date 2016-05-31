#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(string x, string y)
{
	for (int i = 0; i < x.length(); i++)
	if (x[i] != y[i])
	{
		bool a = islower(x[i]);
		bool b = islower(y[i]);

		if ((a && b) || (!a && !b))
			return x[i] < y[i];
		else
		{
			if (a && !b)
			{
				if (x[i] - 'a' == y[i] - 'A')
					return false;
				else
					return x[i] - 'a' < y[i] - 'A';
			}
			else
			{
				if (x[i] - 'A' == y[i] - 'a')
					return true;
				else
					return x[i] - 'A' < y[i] - 'a';
			}
		}
	}
	return false;
}

int main()
{
	int n;
	while (cin >> n && n)
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			cin.get();

		//input
		string s; getline(cin, s);
		char c[1001];
		int m = s.length();
		for (int j = 0; j < m; j++)
			c[j] = s[j];

		sort(c, c + m);

		for (int j = 0; j < m; j++)
			s[j] = c[j];

		//generate
		vector<string> output;
		output.push_back(s);
		while (next_permutation(c, c + m))
		{
			string temp = s;
			for (int j = 0; j < m; j++)
				temp[j] = c[j];
			output.push_back(temp);
		}

		sort(output.begin(), output.end(), cmp);

		//output
		cout << output[0] << endl;
		for (int j = 1; j < output.size(); j++)
		if (output[j] != output[j - 1])
			cout << output[j] << endl;
	}
	return 0;
}