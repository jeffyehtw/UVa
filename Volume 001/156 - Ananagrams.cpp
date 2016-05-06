#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class obj
{
public:
	obj() {}
	obj(string var, int x)
	{
		s = var;
		index = x;

		//initialize
		int temp[26];
		for (int i = 0; i < 26; i++)
			temp[i] = 0;

		for (int i = 0; i < s.length(); i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			temp[s[i] - 'a']++;
		else
			temp[s[i] - 'A']++;

		count = "0000000000000"
			"0000000000000"
			"0000000000000"
			"0000000000000";

		for (int i = 0; i < 26; i++)
		if (temp[i] < 10)
			count[2 * i + 1] = '0' + temp[i];
		else
		{
			count[2 * i] = '0' + temp[i] / 10;
			count[2 * i + 1] = '0' + temp[i] % 10;
		}
	}
	string s;
	string count;
	int index;
};

bool cmp1(obj x, obj y)
{
	return x.count < y.count;
}

bool cmp2(obj x, obj y)
{
	return x.s < y.s;
}

int main()
{
	string temp;
	vector<obj> var;
	while (cin >> temp)
	{
		if (temp == "#")
			break;

		var.push_back(obj(temp, var.size()));
	}

	sort(var.begin(), var.end(), cmp1);

	int n = var.size();
	vector<obj> output;

	//first
	if (var[0].count != var[1].count)
		output.push_back(var[0]);
	for (int i = 1; i < n - 1; i++)
	if (var[i].count != var[i - 1].count
		&& var[i].count != var[i + 1].count)
		output.push_back(var[i]);
	//last
	if (var[n - 2].count != var[n - 1].count)
		output.push_back(var[n - 1]);

	//output
	sort(output.begin(), output.end(), cmp2);
	for (int i = 0; i < output.size(); i++)
		cout << output[i].s << endl;

	return 0;
}