#include<iostream>

using namespace std;

void print(int n, bool graph[][5], int arr[])
{
	if (n == 8)
	{
		for (int i = 0; i < 9; i++)
			cout << arr[i];
		cout << endl;
	}
	else
	for (int i = 0; i < 5; i++)
	if (graph[arr[n - 1] - 1][i])
	{	
		arr[n] = i + 1;
		graph[arr[n - 1] - 1][i] = false;
		graph[i][arr[n - 1] - 1] = false;
		print(n + 1, graph, arr);

		//recover
		graph[arr[n - 1] - 1][i] = true;
		graph[i][arr[n - 1] - 1] = true;
	}
}

int main()
{
	//initialize
	int arr[9];
	arr[0] = 1;
	arr[8] = 2;

	bool graph[5][5] = {
		0, 1, 1, 0, 1,
		1, 0, 1, 0, 1,
		1, 1, 0, 1, 1,
		0, 0, 1, 0, 1,
		1, 1, 1, 1, 0
	};
	
	print(1, graph, arr);
	system("pause");
	return 0;
}