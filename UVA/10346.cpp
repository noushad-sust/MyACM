#include<stdio.h>

int main()
{
    int i,n,k,hand,sum;
    while(scanf("%d %d",&n,&k)==2)
    {
        sum=n;
        while(n>=k)
        {
            sum+=n/k;
            hand=n%k;
            n=n/k+hand;
        }
        printf("%d\n",sum);
    }
    return 0;
}
