#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,lt;
    char s[1000000];
    while(gets(s))
    {
        lt=0;
        n=strlen(s);
        s[n]='\n';
        for(j=0;j<=n;j++)
        {
            if(s[j]==' ' || s[j]=='\n')
               {
                    for(i=j-1;i>=lt;i--)
                    printf("%c",s[i]);

                    lt=j+1;
                    printf("%c",s[j]);
               }
        }
    }
    return 0;
}
