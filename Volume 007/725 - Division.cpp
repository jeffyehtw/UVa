#include<iostream>

#define MAX 100000

using namespace std;

class obj
{
	public:
		obj() {}
		obj(int var)
		{
			ok = true;
			num = var;
			for (int i = 0; i < 10; i++)
				c[i] = false;
			for (int i = 0; i < 5; i++)
			{
				if (!c[var % 10])
					c[var % 10] = true;
				else
				{
					ok = false;
					break;
				}
				var /= 10;
			}
		}
		int num;
		//count
		bool c[10];
		bool ok;
};

obj nums[MAX];

bool check(int x, int y)
{
	for (int i = 0; i < 10; i++)
	if (nums[x].c[i] == nums[y].c[i])
		return false;
	return true;
}

int main()
{
	//initialize
	for (int i = 0; i < MAX; i++)
		nums[i] = obj(i);

	int n;
	bool first = true;
	while (cin >> n && n)
	{
		if (!first)
			cout << endl;
		first = false;

		bool output = false;
		for (int i = 0; i < MAX; i++)
		{
			if (i * n < MAX && nums[i].ok 
				&& nums[i * n].ok 
				&& check(i, i * n))
			{
				printf("%05d / %05d", n * i, i);
				printf(" = %d\n", n);
				output = true;
			}
		}
		if (!output)
		printf("There are no solutions for %d.\n", n);
	}
	return 0;
}