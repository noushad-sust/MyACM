#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int t,n,d,p,h,ld,k;
    bool a[4000];

    scanf("%d",&t);
    for(int i=1;i<=t;i++) {
        ld=0;
        memset(a,0,sizeof(a));

        scanf("%d %d",&d,&p);
        for(int j=1;j<=p;j++) {
            k=d;
            scanf("%d",&h);
            int m=0;
            while(k>1) {
                ++m;
             k=h*m;
             if(k>d)
                break;
             if(a[k]==0 && k%7!=6 && k%7!=0 ) {
                ++ld;
                a[k]=1;
             }
            }
        }

    printf("%d\n",ld);

    }
    return 0;
}
