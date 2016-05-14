#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class obj
{
public:
	obj() {}
	obj(string var)
	{
		s = var;
		int n = s.length();
		for (int i = 0; i < n; i++)
		if (s[i] == ' ')
			n--;

		//remove space
		var.erase(remove(var.begin(), var.end(), ' '), var.end());
		ss = var;

		sort(ss.begin(), ss.end());
	}
	//original string
	string s;
	//sorted string
	string ss;
};

bool cmpByss(obj x, obj y)
{
	int n = x.ss.length();
	int m = y.ss.length();

	if (n != m)
		return n < m;
	else if (x.ss != y.ss)
		return x.ss < y.ss;
	else
		return x.s < y.s;
}

bool isAnagram(obj x, obj y)
{
	return x.ss == y.ss;
}

int main()
{
	int n;
	while (cin >> n)
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cin.get();
			cin.get();
		}

		//input
		string s;
		vector<obj> var;
		while (getline(cin, s))
		{
			if (s.length() == 0)
				break;

			var.push_back(obj(s));
		}
		
		//sort by sorted s
		sort(var.begin(), var.end(), cmpByss);

		//generate output by form
		int m = var.size();
		vector<string> output;
		for (int j = 0; j < m; j++)
		for (int k = j + 1; k < m; k++)
		if (isAnagram(var[j], var[k]))
		{
			string t = var[j].s + " = ";
			t += var[k].s;
			output.push_back(t);
		}
		else
			break;

		sort(output.begin(), output.end());

		//output
		for (int j = 0; j < output.size(); j++)
			cout << output[j] << endl;
		if (i < n - 1)
			cout << endl;
	}
	return 0;
}