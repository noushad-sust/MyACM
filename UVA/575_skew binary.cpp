#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int i,n,sum,l;
    char a[1000];

    while(gets(a))
    {
        l=strlen(a);
        if(l==1 && a[0]=='0')
            break;
        sum=0;
        for(i=0;i<l;i++)
            sum+=(a[i]-'0')*(pow(2,l-i)-1);

        printf("%d\n",sum);
    }
    return 0;
}
