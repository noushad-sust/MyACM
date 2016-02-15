#include<stdio.h>
#include<string.h>

int main()
{
    float disp,sum,T,l,n,h,m,ss,pspeed,speed,mlt,ph,pm,ps;
    int i;
    char s[100];

    pspeed=0;
    ph=0;
    pm=0;
    ps=0;
    disp=0;
    while(gets(s))
    {
        h=(s[0]-'0')*10+s[1]-'0';
        m=(s[3]-'0')*10+s[4]-'0';
        ss=(s[6]-'0')*10+s[7]-'0';

        mlt=1;
        l=strlen(s);
        if(l>9)
        {
                speed=0;
                for(i=l-1;i>8;i--)
            {
                speed+=(s[i]-'0')*mlt;
                mlt*=10;
            }
        }

        T=(h-ph)*3600+(m-pm)*60+(ss-ps);

        disp+=((T*pspeed)/3600);


       if(l<9)
           {
               for(i=0;i<8;i++)
               printf("%c",s[i]);
                printf(" %.2f km\n",disp);
           }

        ph=h;
        pm=m;
        ps=ss;
        pspeed=speed;
    }
  return 0;
}
