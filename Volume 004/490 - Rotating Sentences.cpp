#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	string temp;
	vector<char> s[101];
	int m = 0;
	int index = 0;

	while (getline(cin, temp))
	{
		for (int i = 0; i < temp.length(); i++)
			s[index].push_back(temp[i]);
		m = max(m, (int)temp.length());
		index++;
	}

	//align
	for (int i = 0; i < index; i++)
	{
		int fix = m - s[i].size();
		for (int j = 0; j < fix; j++)
			s[i].push_back(' ');
	}

	//output
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < index; j++)
		{
			cout << s[index - 1 - j][i];
		}
		cout << endl;
	}
	return 0;
}