#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	int sum[101] = { 0 };

	while (cin >> s && s != "0")
	{
		//add
		for (int i = 0; i < s.length(); i++)
		sum[100 - i] += s[s.length() - 1 - i] - '0';

		//%10
		for (int i = 100; i > 0; i--)
		{
			sum[i - 1] += sum[i] / 10;
			sum[i] %= 10;
		}
	}
	//output
	bool print = false;
	for (int i = 0; i < 101; i++)
	{
		if (sum[i] != 0)
			print = true;
		if (print)
			cout << sum[i];
	}
	cout << endl;
	return 0;
}