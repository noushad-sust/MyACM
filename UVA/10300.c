#include<stdio.h>

int main()
{
    long int i,j,n,t,h,a,b,c,sum;
    scanf("%ld",&t);
    for(j=0;j<t;j++)
    {
        sum=0;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%ld %ld %ld",&a,&b,&c);
            sum+=a*c;
        }
        printf("%ld\n",sum);
    }

    return 0;
}

