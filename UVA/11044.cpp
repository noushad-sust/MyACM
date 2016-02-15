#include<stdio.h>

int main()
{
    int i,t,n,m,res;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&m);
        res=(n/3)*(m/3);
        printf("%d\n",res);
    }
    return 0;
}
