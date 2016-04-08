#include<iostream>
#include<string>
#include<vector>
 
using namespace std;
 
class player
{
public:
    player()
        :win(0), lose(0){}
    double win;
    double lose;
};
 
int main()
{
    int n, k;
    bool print = false;
 
    while (cin >> n && n)
    {
        if (print)
            printf("\n");
        print = true;
 
        cin >> k;
 
        vector<player> p;
        for (int i = 0; i < n; i++)
            p.push_back(player());
 
        int total = k * n * (n - 1) / 2;
        int tie = 0;
 
        for (int i = 0; i < total; i++)
        {
            int p1, p2;
            string m1, m2;
 
            cin >> p1 >> m1 >> p2 >> m2;
 
            if ((m1 == "rock" && m2 == "scissors")
                || (m1 == "scissors" && m2 == "paper")
                || (m1 == "paper" && m2 == "rock"))
            {
                p[p1 - 1].win++;
                p[p2 - 1].lose++;
            }
            else if (m1 != m2)
            {
                p[p1 - 1].lose++;
                p[p2 - 1].win++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            double temp = p[i].win + p[i].lose;
            if (p[i].win + p[i].lose != 0)
                printf("%.3f\n", p[i].win / temp);
            else
                printf("-\n");
        }
    }
    return 0;
}