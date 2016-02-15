#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,sum,l;
    char a[10000];

    while(scanf("%s",a)==1)
    {
        sum=0;
        l=strlen(a);
        if(l==1 && a[0]=='0')
        break;

        if(l%2==1)
            a[l]='0';
        else
            l=l-1;

        for(i=0;i<l;i=i+2)
            sum+=a[i]-a[i+1];

        //printf("\nsum=%d\n",sum);
        n=sum%11;

        if(n==0)
            printf("%s is a multiple of 11.\n",a);
        else
            printf("%s is not a multiple of 11.\n",a);
    }
    return 0;
}
