#include<iostream>
#include<set>
#include<map>

using namespace std;

int main()
{
	int n;
	while (cin >> n && n)
	{
		int max = 0;
		int mc = 0;
		map<set<int>, int> count;

		//input
		while (n--)
		{
			set<int> s;
			for (int i = 0; i < 5; i++)
			{
				int temp; cin >> temp;
				s.insert(temp);
			}
			count[s]++;

			if (count[s] > max)
			{
				max = count[s];
				mc = 1;
			}
			else if (count[s] == max)
				mc++;
		}
		cout << max * mc << endl;		
	}
	return 0;
}