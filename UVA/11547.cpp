#include<stdio.h>
#include<stdlib.h>

int s;
void doshok(int n);
int main()
{
    int i,n,r,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        r=n*315+36962;
        if(r<0)
        r=-r;
        doshok(r);
        printf("%d\n",s);
    }
    return 0;
}
void doshok(int n)
{
    if(n>=100000)
        n=n%100000;
    else if(n>=10000)
        n=n%10000;
    else if(n>=1000)
        n=n%1000;
    else if(n>=100)
        n=n%100;
    else
    {
        s=n/10;
        return ;
    }
    doshok(n);
}
