#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,p;
    char s[100];
    while(gets(s))
    {
        p=0;
        n=strlen(s);
        for(i=0;i<n;i++)
        {
            if(s[i]=='B' || s[i]=='F' || s[i]=='P' || s[i]=='V')
                    {
                        if(p!=1)
                            printf("1");
                        p=1;
                    }
            else if(s[i]=='C' || s[i]=='G' || s[i]=='J' || s[i]=='K'|| s[i]=='Q' || s[i]=='S' || s[i]=='X'|| s[i]=='Z')
                    {
                         if(p!=2)
                            printf("2");
                        p=2;
                    }
            else if(s[i]=='D' || s[i]=='T')
                    {
                         if(p!=3)
                            printf("3");
                        p=3;
                    }
            else if(s[i]=='L')
                    {
                        if(p!=4)
                            printf("4");
                        p=4;
                    }
            else if(s[i]=='M' || s[i]=='N')
                    {
                        if(p!=5)
                            printf("5");
                        p=5;
                    }
            else if(s[i]=='R')
                    {
                        if(p!=6)
                            printf("6");
                        p=6;
                    }

                    else
                    p=0;
        }
        printf("\n");
    }
    return 0;
}
