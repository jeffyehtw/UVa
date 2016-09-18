#include<iostream>
#include<cstdio>
 
using namespace std;
 
int main()
{
  int n, m;
  while (scanf("%d", &n) != EOF)
  while(n--)
  {
      scanf("%d", &m);
 
      int alpha[256] = {0};
      while(m--)
      {
        unsigned char s;
        int val;
        scanf(" %c %d", &s, &val);
        alpha[s] = val;
      }
 
      scanf("%d ", &m);
 
      int total = 0;
      while(m--)
      {
        unsigned char s;
        while((s = getchar()) != EOF && s != '\n')
          total += alpha[s];
      }
      printf("%.2lf$\n", total / 100.0);
  }
  return 0;
}