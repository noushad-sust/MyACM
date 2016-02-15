#include<stdio.h>
bool b[100000010];
int main()
{
    int i,j,n,m,start,count;
    while(scanf("%d %d",&n,&m)==2)
    {
            if(n==0 && m==0)
            break;

        int a[n+100],c;
        count=0;
        for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                b[a[i]]=1;
            }
        for(i=0;i<m;i++)
           {
               scanf("%d",&c);
               if(b[c]==1)
                ++count;
           }
           for(i=0;i<n;i++)
           b[a[i]]=0;

        printf("%d\n",count);
    }
    return 0;
}
