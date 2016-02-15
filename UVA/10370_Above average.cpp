#include<stdio.h>

int main()
{
    float a[1000],sum,avg,above;
    int i,c,n,t,k;
    char b;
    b='%';
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        sum=0;
        above=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            {
                scanf("%f",&a[i]);
                sum+=a[i];
            }
        avg=sum/n;

            for(i=0;i<n;i++)
            {
                if(a[i]>avg)
                    ++above;
            }

            above=(above/n)*100;
           printf("%.3f%c\n",above,b);
    }
    return 0;
}
