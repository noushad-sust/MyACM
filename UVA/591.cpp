#include<stdio.h>

int main()
{
    int i,k,n[110],sum,h,t,count;
    count=0;

    while(scanf("%d",&k)==1)
    {
        sum=0;
        t=0;
        if(k==0)
            break;
        for(i=0;i<k;i++)
            {
                scanf("%d",&n[i]);
                sum+=n[i];
            }
        h=sum/k;
        for(i=0;i<k;i++)
        {
            if(h>n[i])
            t+=h-n[i];
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",++count,t);
    }
    return 0;
}
