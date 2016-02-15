#include<stdio.h>

int main()
{
    int i,n,sum;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        sum=n/2;
        printf("%d\n",sum);

    }
    return 0;
}
