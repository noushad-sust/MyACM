#include<stdio.h>
#include<math.h>
void seive(void);
int a[50500];
int main()
{
    int i,j,n,tag,first;
    seive();

    while(scanf("%d",&n)==1)
    {
        first=1;
        if(n==0)
            break;
        if(n<0)
        {
            n=-n;
            printf("%d = -1 x ",-n);
        }
        else
            printf("%d = ",n);

        while(1)
        {
            tag=0;
            for(i=0;i<=5132;i++)
            {
                if(n%a[i]==0)
                {
                    if(first==1)
                        printf("%d",a[i]);
                    else
                        printf(" x %d",a[i]);

                    first=0;
                    n=n/a[i];
                    tag=1;
                    break;
                }
            }
        if(tag==0)
            {
                if(n>=49999)
                if(first==1)
                    printf("%d",n);
                else
                    printf(" x %d",n);
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
void seive(void)
{
    int i,n,count,s,l;
    count=0;
    a[0]=2;
    for(n=3;n<50000;n+=2)
    {
        s=1;
        l=sqrt(n);
        for(i=3;i<=l;i+=2)
            if(n%i==0)
            {
                s=0;
                break;
            }
    if(s==1)
        a[++count]=n;
    }
}
