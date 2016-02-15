#include<stdio.h>
#include<string.h>

int main()
{
    int i,k,t,n,p,q,a[100],sum;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d %d %d",&n,&p,&q);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        sum=0;
        for(i=1;i<=n;i++)
        {
            if(i>p)
                break;

            sum+=a[i-1];
            if(sum>q)
                break;
        }
        printf("Case %d: %d\n",k,i-1);
    }
    return 0;
}
