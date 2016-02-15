#include<stdio.h>

int main()
{
    int i,n,a,b,sum,t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d %d",&a,&b);
        if(a%2==0)
            a=a+1;
        sum=0;
        for(i=a;i<=b;i+=2)
            sum+=i;

        printf("Case %d: %d\n",k,sum);
    }
    return 0;
}
