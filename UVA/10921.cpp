#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,sn[100];
    char s[50];
    sn['A']=2;sn['B']=2;sn['C']=2;
    sn['D']=3;sn['E']=3;sn['F']=3;
    sn['G']=4;sn['H']=4;sn['I']=4;
    sn['J']=5;sn['K']=5;sn['L']=5;
    sn['M']=6;sn['N']=6;sn['O']=6;
    sn['P']=7;sn['Q']=7;sn['R']=7;sn['S']=7;
    sn['T']=8;sn['U']=8;sn['V']=8;
    sn['W']=9;sn['X']=9;sn['Y']=9;sn['Z']=9;
    sn['0']=0;sn['1']=1;

    while(scanf("%s",s)==1)
    {
        n=strlen(s);
        for(i=0;i<n;i++)
        {
            if(s[i]=='-')
            printf("-");
            else
            printf("%d",sn[s[i]]);
        }
        printf("\n");
    }
    return 0;
}
