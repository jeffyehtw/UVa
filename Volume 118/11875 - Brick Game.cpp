#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    while(cin >> T && T<=100)
    {
        for(int i=0;i<T;i++)
        {
            int N, age[11];
            cin >> N;
            for(int j=0;j<N;j++)
                cin >> age[j];
            sort(age, age+N);
            cout << "Case " << i+1 << ": " << age[(N-1)/2] << endl;
        }
    }
    return 0;
}