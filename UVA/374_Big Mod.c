#include<stdio.h>

int main()
{
    int  i,n,b,m,power,x,a[100000],k;

    while(scanf("%d %d %d",&b,&n,&m)==3)
    {
        i=0;
        while(n>=1)
        {
            a[i++]=n%2;
            n=n/2;
        }
            k=i;
            x=1;
            power=b%m;
            for(i=0;i<k;i++)
            {
                if(a[i]==1)
                    x=(x*power)%m;
                power=(power*power)%m;
            }
            printf("%d\n",x);
    }
    return 0;
}

