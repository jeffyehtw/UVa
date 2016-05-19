#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	while (cin >> n && n != -1)
	{
		//input
		string answer, guess;
		cin >> answer >> guess;

		//initialize
		bool ansTable[26];
		bool isGuessed[26];
		for (int i = 0; i < 26; i++)
		{
			ansTable[i] = false;
			isGuessed[i] = false;
		}

		int answer_num = 0;
		for (int i = 0; i < answer.length(); i++)
			ansTable[answer[i] - 'a'] = true;
		for (int i = 0; i < 26; i++)
		if (ansTable[i])
			answer_num++;

		//judge
		bool win = false;
		int chicken = 0;
		for (int i = 0; i < guess.length(); i++)
		{
			if (!isGuessed[guess[i] - 'a'])
			{
				isGuessed[guess[i] - 'a'] = true;

				if (ansTable[guess[i] - 'a'])
					answer_num--;
				else
					chicken++;
			}

			if (chicken >= 7)
				break;
			if (answer_num == 0)
			{
				win = true;
				break;
			}
		}

		//output
		cout << "Round " << n << endl;
		if (chicken >= 7)
			cout << "You lose.\n";
		else if (win)
			cout << "You win.\n";
		else
			cout << "You chickened out.\n";
	}
	return 0;
}