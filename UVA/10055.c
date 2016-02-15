#include<stdio.h>
int main()
{
    long a,b,res;
    while(scanf("%ld %ld",&a,&b)==2)
    {
        res=a-b;
        if(res<0)
        res=-res;
        printf("%ld\n",res);
    }
    return 0;
}
