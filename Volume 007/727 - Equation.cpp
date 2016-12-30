#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stack>
#include <fstream>

using namespace std;

int get_priority(char c) {
	if (c == '(')
		return 3;
	else if (c == ')')
		return 0;
	else if (c == '*' || c == '/')
		return 2;
	else
		return 1;
}

int main() {
	//ifstream cin;
	//cin.open("input.txt", ios::in);

	// var
	int n;
	//cin >> n;
	cin >> n;

	//cin.get();
	cin.get();
	cin.get();

	while (n--) {
		// var
		string buffer;
		stack<char> s;
		vector<char> in;
		vector<char> out;

		//cin.get();

		char c;
		//while (cin.get(c)) {
		while (cin.get(c)) {
			if (c == '\n')
				break;
			cin.get();
			
			in.push_back(c);
		}

		/*
		getline(cin, buffer);
		istringstream ss(buffer);
		while (getline(ss, buffer, ' ')) {
			in.push_back(buffer[0]);
		}
		*/

		for (int i = 0; i < in.size(); i++) {
			if (isdigit(in[i])) {
				out.push_back(in[i]);
			}
			else if (in[i] == '(') {
				s.push(in[i]);
			}
			else if (in[i] == ')') {
				while (!s.empty() && s.top() != '(') {
					out.push_back(s.top());
					s.pop();
				}
				out.push_back(s.top());
				s.pop();
			}
			else if (in[i] == '+' || in[i] == '-') {
				while (!s.empty() && (s.top() == '+' || s.top() == '-' || s.top() == '*' || s.top() == '/')) {
					out.push_back(s.top());
					s.pop();
				}
				s.push(in[i]);
			}
			else if (in[i] == '*' || in[i] == '/') {
				if (!s.empty() && (s.top() == '*' || s.top() == '/')) {
					out.push_back(s.top());
					s.pop();
				}
				s.push(in[i]);
			}
		}
		
		while (!s.empty()) {
			out.push_back(s.top());
			s.pop();
		}

		for (int i = 0; i < out.size(); i++) {
			if (out[i] != '(' && out[i] != ')') {
				cout << out[i];
			}
		}
		cout << endl;

		if (n > 0) 
			cout << endl;
	}
	cout << endl;
	return 0;
}