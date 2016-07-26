#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	const string ans[2] = {
		"Stan is dishonest\n",
		"Stan may be honest\n"
	};

	int n;
	while (cin >> n && n)
	{
		cin.get();

		//input
		string s;
		int left = 1;
		int right = 10;

		while (getline(cin, s))
		{
			if (s == "right on")
				break;

			if (s == "too high")
				right = min(right, n - 1);
			else if (s == "too low")
				left = max(left, n + 1);

			cin >> n;
			cin.get();
		}
		cout << ans[n >= left && n <= right];
	}
	return 0;
}