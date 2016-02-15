#include<stdio.h>
int main()
{
    long long i,n,m,f,pm;
    while(scanf("%lld",&n)==1)
    {
        if(n==-1)
            break;
        m=0;
        pm=0;
        f=1;
        for(i=1;i<=n;i++)
        {
            m=pm+f;
            f=pm+1;
            pm=m;
        }
        printf("%lld %lld\n",m,m+f);
    }
    return 0;
}
