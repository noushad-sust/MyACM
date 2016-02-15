#include<stdio.h>
#include<string.h>
int prime(int n);

int main()
{
    int i,d,n,tag,lt;
    char s[100];
    while(scanf("%s",s)==1)
    {
        d=0;
        lt=strlen(s);
        for(i=0;i<lt;i++)
        {
            if(s[i]>='a' && s[i]<='z')
                n=s[i]-'a'+1;
            else
                n=s[i]-'A'+27;
            d+=n;
        }

        tag=prime(d);

        if(tag==0)
            printf("It is not a prime word.\n");
        else
            printf("It is a prime word.\n");
    }
    return 0;
}
int prime(int n)
{
    int i;
            if(n==2)
                return 1;
            if(n%2==0)
                return 0;
            else
            for(i=3;i<=n/i;i+=2)
                 if(n%i==0)
                 return 0;

        return 1;
}

