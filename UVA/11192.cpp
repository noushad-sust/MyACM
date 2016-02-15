#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,g,l,j;
    char s[100],r[100];

    while(scanf("%d",&g)==1)
    {
        if(g==0)
            break;

        scanf(" %s",s);
        n=strlen(s);
        l=n/g;
        for(j=0;j<n;j=j+l)
        for(i=0;i<l;i++)
            r[i+j]=s[j+l-i-1];

        r[strlen(s)]='\0';

        puts(r);
    }
    return 0;
}
