#include<stdio.h>
#include<string.h>

int main()
{
    long long i,n,l;
    char a[1000];

    while(scanf("%lld",&n)==1)
    {
        if(n<0)
            break;
    if(n==0)
        printf("0");
    else
        {
                for(i=0;;i++)
            {
                if(n==0)
                    break;
                a[i]=(n%3)+'0';
                n=n/3;
            }
            l=i;
            for(i=0;i<l;i++)
                printf("%c",a[l-i-1]);
        }
        printf("\n");
    }
    return 0;
}
