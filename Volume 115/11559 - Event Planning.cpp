#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class obj
{
public:
	obj() {}
	obj(int x, vector<int> y)
	{
		price = x;
		empty = y;
		sort(empty.begin(), empty.end());
		reverse(empty.begin(), empty.end());
	}
	int price;
	vector<int> empty;
};

bool cmp(obj x, obj y)
{
	return x.price < y.price;
}

int main()
{
	int n, b, h, w;
	while (cin >> n >> b >> h >> w)
	{
		//input
		vector<obj> var;
		for (int i = 0; i < h; i++)
		{
			int price; 
			cin >> price;

			vector<int> t;
			for (int j = 0; j < w; j++)
			{
				int temp; cin >> temp;
				t.push_back(temp);
			}
			var.push_back(obj(price, t));
		}

		sort(var.begin(), var.end(), cmp);

		//output
		bool stayhome = true;
		for (int i = 0; i < var.size(); i++)
		{
			if (var[i].price * n > b)
				break;

			if (var[i].empty[0] >= n)
			{
				cout << var[i].price * n;
				cout << endl;
				stayhome = false;
				break;
			}
		}
		if (stayhome)
			cout << "stay home" << endl;
	}
	return 0;
}