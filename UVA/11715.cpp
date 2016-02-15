#include<stdio.h>
#include<math.h>

int main()
{
    double p,b,c,u,v,a,s,t;
    int n,count;
    count=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        scanf("%lf %lf %lf",&p,&b,&c);

        if(n==1)
        {
            u=p;
            v=b;
            t=c;
            a=(v-u)/t;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",++count,s,a);
        }
        else if(n==2)
        {
            u=p;
            v=b;
            a=c;
            t=(v-u)/a;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",++count,s,t);
        }
        else if(n==3)
        {
            u=p;
            a=b;
            s=c;
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",++count,v,t);
        }
        else
        {
            v=p;
            a=b;
            s=c;
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",++count,u,t);
        }
    }
    return 0;
}
