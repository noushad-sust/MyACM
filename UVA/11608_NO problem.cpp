#include<stdio.h>

int main()
{
    int i,n,a[15],r[15],p,count;
    count=0;
    while(scanf("%d",&a[0])==1)
    {
        ++count;
        if(a[0]<0)
            break;
        for(i=1;i<13;i++)
            scanf("%d",&a[i]);
        for(i=0;i<12;i++)
            scanf("%d",&r[i]);

        printf("Case %d:\n",count);
        p=0;
        for(i=0;i<12;i++)
        {
            p+=a[i];
            if(p>=r[i])
                {
                    printf("No problem! :D\n");
                    p=p-r[i];
                }
            else
            printf("No problem. :(\n");
        }
    }
    return 0;
}
