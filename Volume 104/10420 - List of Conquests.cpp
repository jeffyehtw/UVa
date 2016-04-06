#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class obj
{
public:
	obj(string a, string b)
	{
		country = a;
		name = b;
	}
	obj() {}
	string country;
	string name;

	bool operator<(obj &x) const
	{
		if (country == x.country)
			return name < x.name;
		return country < x.country;
	}
};

class data
{
public:
	data(string s)
		:country(s) {}
	data() {}
	string country;
	vector<string> name;
};

int main()
{
	int n;
	while (cin >> n)
	{
		vector<obj> x;

		while (n--)
		{
			string a; cin >> a;
			string b; getline(cin, b);

			x.push_back(obj(a, b));
		}
		sort(x.begin(), x.end());

		//initialize first
		vector<data> d;
		d.push_back(x[0].country);
		d[0].name.push_back(x[0].name);

		for (int i = 1; i < x.size(); i++)
		{
			int last = d.size() - 1;
			int index = d[last].name.size() - 1;

			if (x[i].country != d[last].country)
			{
				d.push_back(x[i].country);

				last = d.size() - 1;
				d[last].name.push_back(x[i].name);
			}
			else if (x[i].name != d[last].name[index])
			{
				d[last].name.push_back(x[i].name);
			}
		}
		for (int i = 0; i < d.size(); i++)
		{
			cout << d[i].country << " ";
			cout << d[i].name.size() << endl;
		}
	}
	return 0;
}