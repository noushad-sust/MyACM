#include<stdio.h>

int main()
{
    long long int i,n,a,pa,count,lim,c;
    c=0;
    while(scanf("%lld %lld",&a,&lim)==2)
    {
        pa=a;
        if(a<0 && lim<0)
        break;
        ++c;
        count=0;
        for(i=0;i>-1;i++)
        {
            if(a>lim)
            break;
       ++count;
            if(a==1)
                break;
            else if(a%2==0)
                a=a/2;
            else
                a=3*a+1;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",c,pa,lim,count);
    }
    return 0;
}
