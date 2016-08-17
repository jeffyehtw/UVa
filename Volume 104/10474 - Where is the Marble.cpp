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

		cout << "CASE# " << index << ":" << endl;		while (q--)		{			bool found = false;			int target; cin >> target;			for (int i = 0; i < marble.size(); i++)			{				if (target == marble[i])				{					cout << target << " found at " << i + 1 << endl;					found = true;					break;				}			}			if (!found)				cout << target << " not found" << endl;		}
		index++;
	}
	return 0;
}