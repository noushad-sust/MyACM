#include<stdio.h>
int prime( int n);
void sieve(void);
int a[1000000],t[1000000];
int main()
{
    int i,j,b,n,sa,sb;
    sieve();
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        for(i=0;a[i]<n;i++)
        {
            b=n-a[i];

            if(t[b]==1)
               {
                       sa=a[i];
                       sb=b;
                       break;
                }
        }
        printf("%d = %d + %d\n",n,sa,sb);
    }
    return 0;
}

void sieve(void)
{
    int i,n,c,s;
    c=0;

    for(n=3;n<1000100;n+=2)
    {
        s=1;
        for(i=3;i<=n/i;i+=2)
            if(n%i==0)
            {
                s=0;
                break;
            }
    if(s==1)
       {
           a[c]=n;
            t[n]=1;
            ++c;
       }
    }
}
