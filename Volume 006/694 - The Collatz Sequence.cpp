#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long A, L, temp;
    int n=0;
    while(scanf("%lld %11d", &A, &L)==2)
    {
        if(A<0 && L<0) break;
        int r=1;
        temp=A;
        while(temp&1)
        {
            if(A&1) temp=3*temp+1;
            else temp/=2;

            if(temp>L)
                break;
            r++;
        }
        printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n", ++n, A, L, r);
    }
    return 0;
}