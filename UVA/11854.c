#include<stdio.h>
int main()
{
    int i,n,a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a==0 || b==0 || c==0)
        break;


        if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a)
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
