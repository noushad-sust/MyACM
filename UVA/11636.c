#include<stdio.h>

int main()
{
    int i,n,m,count,num;
    num=0;
    while(scanf("%d",&n)==1)
    {
        count=0;
        if(n<0)
        break;
        else
        {
            if(n==0)
            count=0;
            else if(n==1)
            count=0;
            else
            {

                m=1;
                for(i=0;i>-1;i++)
                {
                    if(2*m>=n)
                    {
                        ++count;
                        break;
                    }
                    else
                    {
                        ++count;
                        m=2*m;
                    }
                }
            }
            printf("Case %d: %d\n",++num,count);
        }
    }
    return 0;
}
