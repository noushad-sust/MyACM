#include<stdio.h>
int main()
{
    int i,n,pn,p[25],fact,max,f,m,b[100],mod;
    p[0]=2;p[1]=3;p[2]=5;p[3]=7;p[4]=11;p[5]=13;p[6]=17;p[7]=19;p[8]=23;p[9]=29;p[10]=31;p[11]=37;p[12]=41;p[13]=43;p[14]=47;
    p[15]=53;p[16]=59;p[17]=61;p[18]=67;p[19]=71;p[20]=73;p[21]=79;p[22]=83;p[23]=89;p[24]=97;


        while(scanf("%d",&n)==1)
        {
            max=-1;
            for(i=0;i<98;i++)
                b[i]=0;
            if(n==0)
                break;
            for(f=2;f<=n;f++)
            {
                m=f;
                while(1)
                {
                    for(i=0;i<25;i++)
                        if(m%p[i]==0)
                        {
                            m=m/p[i];
                            ++b[p[i]];
                            if(i>max)
                                max=i;
                            break;
                        }
                        if(m==1)
                            break;
                }
            }

            printf("%3d! =",n);

            if(max<15)
                mod=max;
            else
                mod=14;
            for(i=0;i<=mod;i++)
                printf("%3d",b[p[i]]);

            if(max>=15)
                printf("\n   %6d",b[p[15]]);

            for(i=16;i<=max;i++)
                printf("%3d",b[p[i]]);

            printf("\n");
        }
    return 0;
}

