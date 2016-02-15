#include<stdio.h>
int main()
{
    int i,n,a,pa,high,low,j,t;

    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        high=0;
        low=0;

        scanf("%d",&n);
        scanf("%d",&pa);
        for(i=0;i<n-1;i++)
        {
            scanf("%d",&a);

            if(a-pa>0)
                ++high;
            else if(a-pa<0)
                ++low;
            pa=a;
        }
        printf("Case %d: %d %d\n",j+1,high,low);
    }
       return 0;
}
