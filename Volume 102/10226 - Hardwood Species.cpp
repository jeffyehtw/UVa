#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class obj
{
public:
	obj(string var)
		:s(var), num(1) {}
	obj() {}
	string s;
	double num;
};

int main()
{
	int n;
	while (cin >> n)
	{
		cin.get();
		cin.get();

		while (n--)
		{
			vector<obj> x;
			vector<string> ss;
			string temp;

			while (getline(cin, temp))
			{
				if (temp.length() == 0)
					break;

				ss.push_back(temp);
			}
			sort(ss.begin(), ss.end());

			for (int i = 0; i < ss.size(); i++)
			{
				if (x.size() > 0)
				{
					if (x[x.size() - 1].s != ss[i])
					{
						x.push_back(obj(ss[i]));
					}
					else
					{
						x[x.size() - 1].num++;
					}
				}
				else
				{
					x.push_back(obj(ss[i]));
				}
			}

			for (int i = 0; i < x.size(); i++)
			{
				cout << x[i].s;
				printf(" %.4f\n", x[i].num * 100 / ss.size());
			}
			if (n > 0)
				cout << endl;
		}
	}
	return 0;
}
