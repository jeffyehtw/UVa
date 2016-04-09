#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class Vocabulary
{
    public:
        string s;
        string sorted;

        Vocabulary(string var) :s(var), sorted(var)
        {
            sort(sorted.begin(), sorted.end());
        }
        Vocabulary() {}
};

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        vector<Vocabulary> v;

        int m; cin >> m;
        if (m > 9999)
            break;

        for (int i = 0; i < m; i++)
        {
            string temp; cin >> temp;
            v.push_back(temp);
        }

        string temp;
        while (cin >> temp && temp != "END")
        {
            Vocabulary test;
            test = Vocabulary(temp);

            cout << "Anagrams for: " + test.s << endl;

            int index = 1;
            for (int i = 0; i < v.size(); i++)
            {
                if (test.sorted == v[i].sorted)
                {
                    printf("%3d) ", index);
                    cout << v[i].s << endl;
                    index++;
                }
            }
            if (index == 1)
                cout << "No anagrams for: " + test.s << endl;
        }
        if(n)
            cout << endl;
    }
    return 0;
}