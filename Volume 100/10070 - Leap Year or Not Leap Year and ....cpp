#include<iostream>
#include<string>

using namespace std;

class obj
{
public:
	obj() {}
	obj(string s)
	{
		//3
		int tn = 0;
		for (int i = 0; i < s.length(); i++)
			tn += s[i] - '0';
		this->isThree = tn % 3 == 0;

		//4
		string ts = s.substr(s.length() - 2);
		tn = stoi(ts);
		this->isFour = tn % 4 == 0;

		//5
		this->isFive = s[s.length() - 1] == '0'
			|| s[s.length() - 1] == '5';

		//11
		int odd = 0;
		int even = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (i % 2 == 1)
				odd += s[i] - '0';
			else
				even += s[i] - '0';
		}
		this->isEleven = (odd - even) % 11 == 0;

		//100
		this->isHundred = s[s.length() - 1] == '0'
			&& s[s.length() - 2] == '0';

		//400
		ts = s.substr(s.length() - 4);
		tn = stoi(ts);
		this->is4Hundred = tn % 400 == 0;
	}
	bool isThree;
	bool isFour;
	bool isFive;
	bool isEleven;
	bool isHundred;
	bool is4Hundred;
};

bool isLeap(obj var)
{
	return (var.isFour
		&& !var.isHundred)
		|| var.is4Hundred;
}

bool isHuluculu(obj var)
{
	return var.isThree
		&& var.isFive;
}

bool isBulukulu(obj var)
{
	return isLeap(var)
		&& var.isFive
		&& var.isEleven;
}

int main()
{
	string s;
	bool first = true;
	while (getline(cin, s))
	{
		if (!first)
			cout << endl;
		first = false;

		obj temp = obj(s);

		bool leap = isLeap(temp);
		bool huluculu = isHuluculu(temp);
		bool bulukulu = isBulukulu(temp);

		if (leap)
			cout << "This is leap year.\n";
		if (huluculu)
			cout << "This is huluculu festival year.\n";
		if (bulukulu)
			cout << "This is bulukulu festival year.\n";
		if (!leap && !huluculu && !bulukulu)
			cout << "This is an ordinary year.\n";
	}
	return 0;
}