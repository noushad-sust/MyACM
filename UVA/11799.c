#include<stdio.h>
int main()
{
    int i,n,t,a,sum,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a>sum)
            sum=a;
        }
        printf("Case %d: %d\n",j+1,sum);
    }
    return 0;
}
