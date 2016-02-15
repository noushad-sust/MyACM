#include<stdio.h>
int main()
{
    int i,n,a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(b>a && b<c)
            printf("Case %d: %d\n",i+1,b);
        else if(b>c && b<a)
            printf("Case %d: %d\n",i+1,b);
        else if(c>b && c<a)
            printf("Case %d: %d\n",i+1,c);
        else if(c>a && c<b)
            printf("Case %d: %d\n",i+1,c);
        else
            printf("Case %d: %d\n",i+1,a);
    }
    return 0;
}
