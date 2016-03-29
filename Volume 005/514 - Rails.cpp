#include<iostream>
#include<stack>

using namespace std;

int main()
{
	int n;
	while (cin >> n && n)
	{
		bool stop = false;

		while (true)
		{
			stack<int> s;

			bool ok = true;

			int num = 1;

			for (int i = 0; i < n; i++)
			{
				int temp; cin >> temp;

				if (temp == 0)
				{
					stop = true;
					break;
				}

				if (temp == num)
				{
					if (num < n)
					{
						num++;
					}
				}
				else
				{
					if (!s.empty() && temp == s.top())
					{
						s.pop();
					}
					else
					{
						while (num != temp && num < n + 1)
						{
							s.push(num);
							num++;
						}
						if (num < n)
						{
							num++;
						}
					}
				}
			}

			if (stop)
				break;

			if (s.size() > 0)
				cout << "No" << endl;
			else
				cout << "Yes" << endl;
		}
		cout << endl;
	}
	return 0;
}
