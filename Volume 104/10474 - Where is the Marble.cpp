#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n, q;
	int index = 1;
	while (cin >> n >> q && (n && q))
	{
		vector<int> marble;
		while (n--)
		{
			int temp; cin >> temp;
			marble.push_back(temp);
		}
		sort(marble.begin(), marble.end());

		cout << "CASE# " << index << ":" << endl;
		index++;
	}
	return 0;
}