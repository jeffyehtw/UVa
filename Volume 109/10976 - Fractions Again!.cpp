#include<iostream>
#include<vector>

#define MAX 10001

using namespace std;

class obj
{
	public:
		obj() {}
		obj(int a, int b)
			:x(a), y(b) {}
		int x, y;
};

vector<obj> dp[MAX];

int main()
{
	//initialize
	for (int i = 1; i < MAX; i++)
	for (int j = i + 1; j <= 2 * i; j++)
	if ((i * j) % (i - j) == 0)
	dp[i].push_back(obj((i * j) / (j - i), j));

	int n;
	while (cin >> n)
	{
		cout << dp[n].size() << endl;
		for (int i = 0; i < dp[n].size(); i++)
		{
			printf("1/%d = ", n);
			printf("1/%d + ", dp[n][i].x);
			printf("1/%d\n", dp[n][i].y);
		}
	}
	return 0;
}