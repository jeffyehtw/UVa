#include<iostream>
#include<queue>

using namespace std;

int main()
{
	int n;
	while (cin >> n && n)
	{
		queue<int> q;

		//initialize
		for (int i = 0; i < n; i++)
			q.push(i + 1);

		cout << "Discarded cards:";
		while (q.size() > 1)
		{
			printf(" %d", q.front());
			if (q.size() > 2)
				cout << ',';
			q.pop();

			q.push(q.front());
			q.pop();
		}
		printf("\nRemaining card: %d\n", q.front());
	}
	return 0;
}