#include<iostream>
#include<stack>
#include<string>
#include<map>

using namespace std;

class obj
{
public:
	obj(int x, int y)
		:m(x), n(y) {}
	obj() {}
	int m, n;
};

int main()
{
	//input
	int n; cin >> n;
	map<char, obj> m;
	for (int i = 0; i < n; i++)
	{
		string s; cin >> s;
		int x, y; cin >> x >> y;
		m[s[0]].m = x;
		m[s[0]].n = y;
	}

	cin.get();

	//query
	string q;
	while (getline(cin, q))
	{
		bool ok = true;
		int count = 0;
		stack<obj> st;

		for (int i = 0; i < q.length(); i++)
		if (q[i] >= 'A' && q[i] <= 'Z')
			st.push(m[q[i]]);
		else if (q[i] == ')')
		{
			obj y = st.top();
			if (!st.empty())
				st.pop();
			obj x = st.top();
			if (!st.empty())
				st.pop();

			if (x.n != y.m)
			{
				ok = false;
				break;
			}
			count += x.m * x.n * y.n;
			st.push(obj(x.m, y.n));
		}
		//pop left
		while (st.size() > 1 && ok)
		{
			obj x = st.top();
			st.pop();
			obj y = st.top();
			st.pop();
			if (x.n != y.m)
			{
				ok = false;
				break;
			}
			count += x.m * x.n * y.m;
			st.push(obj(x.m, y.n));
		}

		//output
		if (!ok)
			cout << "error\n";
		else
			cout << count << endl;
	}
	return 0;
}