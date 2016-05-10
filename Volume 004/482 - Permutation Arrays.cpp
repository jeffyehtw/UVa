#include<iostream>
#include<string>
#include<sstream>

#define MAX 10001

using namespace std;

//variables
int counter;
int index[MAX];
string arr[MAX];

int main()
{
	int n;
	while (cin >> n)
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			cin.get();
		else
			cout << endl;
		cin.get();

		counter = 0;

		//input
		string s;
		getline(cin, s);

		int x;
		stringstream ss(s);
		while (ss >> x)
			index[counter++] = x;

		getline(cin, s);
		ss.clear();
		ss.str(s);

		string y;
		counter = 0;
		while (ss >> y)
			arr[index[counter++]] = y;

		//output
		for (int j = 0; j < counter; j++)
			cout << arr[j + 1] << endl;
	}
	return 0;
}