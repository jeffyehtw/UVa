#include<iostream>
#include<vector>

#define MAX 20000001

using namespace std;

class obj
{
public:
	obj() {}
	obj(int a, int b)
		:x(a), y(b) {}
	int x, y;
};

vector<int> p;
vector<obj> t;
bool prime[MAX];

void initilize()
{
	//initialize
	prime[0] = false;
	prime[1] = false;
	for (int i = 2; i < MAX; i++)
		prime[i] = true;

	for (int i = 2; i < MAX; i++)
	if (prime[i])
	{
		p.push_back(i);
		for (int j = i * 2; j < MAX; j += i)
			prime[j] = false;
	}

	for (int i = 0; i < p.size() - 1; i++)
	if (p[i + 1] - p[i] == 2)
		t.push_back(obj(p[i], p[i + 1]));
}

int main()
{
	//initialize
	initilize();

	int n;
	while (cin >> n && n)
	{
		n--;
		printf("(%d, %d)\n", t[n].x, t[n].y);
	}
	return 0;
}