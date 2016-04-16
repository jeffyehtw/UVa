#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isprime(int n)
{
    if (n == 0)
        return 0;

    bool judge = true;
    for (int i = 2; i <= pow(n, 0.5); i++)
    {
        if (n%i == 0)
        {
            judge = false;
            break;
        }
    }
    return judge;
}

int main()
{
    vector<int> prime;
    int x;

    for (int i = 2; i < 10000; i++)
    {
        if (isprime(i))
            prime.push_back(i);
    }

    while (cin >> x && x > 0)
    {
        int count = 0;
        for (int i = 0;; i++)
        {
            if (prime[i] > x)
                break;

            int sum = 0;

            for (int j = i ; j < prime.size(); j++)
            {
                if (sum > x)
                    break;
                else if (sum == x)
                    count++;

                sum += prime[j];
            }
        }
        cout << count << endl;
    }
    return 0;
}