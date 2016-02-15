#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char s[10010],a[1000][1000];
    int i,j,l,p,n,k;
    double d;
    scanf("%d ",&k);
    for(p=0;p<k;p++)
    {
        gets(s);
        n=strlen(s);
        d=sqrt(n);
        l=(int)d;
        if(d!=l)
            printf("INVALID\n");
        else
           {
                for(i=0;i<l;i++)
                for(j=0;j<l;j++)
                a[i][j]=s[i*l+j];

                for(i=0;i<l;i++)
                for(j=0;j<l;j++)
                    printf("%c",a[j][i]);
                printf("\n");
           }
    }
  return 0;
}
