#include<stdio.h>
int f91(int n);

int main()
{
    int i,n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        printf("f91(%d) = %d\n",n,f91(n));
    }
    return 0;
}
int f91(int n)
{
    if(n>=101)
        return(n-10);
    else if(n<=100)
        return(f91(f91(n+11)));
}
