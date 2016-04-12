#include<iostream>
using namespace std;
int main()
{
	//start pos, password 123
	int a, b, c, d;
	while (cin >> a >> b >> c >> d)
	{
		if (a == 0 && b == 0 && c == 0 && d == 0)
			break;
		int sum = 1080; //total degree
		//password 1
		if (a - b < 0)
			sum += (a + 40 - b) * 9;
		else
			sum += (a - b) * 9;
		//password 2
		if (c -b  < 0)
			sum += (c - b + 40) * 9;
		else
			sum += (c - b) * 9;
		//password 3
		if (c - d<0)
			sum += (c - d + 40) * 9;
		else
			sum += (c - d) * 9;
		cout << sum << endl;
	}
	return 0;
}