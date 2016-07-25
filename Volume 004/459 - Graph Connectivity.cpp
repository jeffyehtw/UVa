#include<iostream>
#include<string>
#include<queue>

using namespace std;

bool visited[26];
bool graph[26][26];

void BFS(int node, int m)
{
	//initialize
	queue<int> q;
	q.push(node);

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		visited[cur] = true;

		for (int i = 0; i < m; i++)
		if (!visited[i] && graph[cur][i])
			q.push(i);
	}
}

int main()
{
	int n;
	while (cin >> n)
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cin.get();
			cin.get();
		}
		else
			cout << endl;

		//input
		string s; getline(cin, s);
		int m = s[0] - 'A' + 1;

		//initialize
		for (int j = 0; j < m; j++)
		{
			visited[j] = false;
			for (int k = 0; k < m; k++)
				graph[j][k] = false;
		}

		//input
		while (getline(cin, s))
		{
			if (s.length() == 0)
				break;

			graph[s[0] - 'A'][s[1] - 'A'] = true;
			graph[s[1] - 'A'][s[0] - 'A'] = true;
		}

		int count = 0;
		for (int j = 0; j < m; j++)
		if (!visited[j])
		{
			BFS(j, m);
			count++;
		}
		cout << count << endl;
	}
	return 0;
}