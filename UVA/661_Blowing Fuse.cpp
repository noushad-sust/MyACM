#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,m,c,a[100],b[1000],sum,max,flag,count;

    bool tag[10000];
    count=0;
    while(scanf("%d %d %d",&n,&m,&c)==3)
    {

        if(n==0 && m==0 && c==0)
            break;

        memset(tag,0,sizeof(tag));
        flag=1;
        sum=0;
        max=0;

        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<=m;i++)
            scanf("%d",&b[i]);

        for(i=1;i<=m;i++)
        {
            if(tag[b[i]]==0)
                {
                    sum+=a[b[i]];
                    tag[b[i]]=1;
                }
            else
            {
                sum=sum-a[b[i]];
                tag[b[i]]=0;
            }

            if(sum>max)
                max=sum;

            if(sum>c)
            {
                flag=0;
                break;
            }
        }
        printf("Sequence %d\n",++count);
        if(flag==1)
        {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n\n",max);
        }
        else
            printf("Fuse was blown.\n\n");
    }
    return 0;
}
