#include<stdio.h>
#include<string.h>
#include<ctype.h>
void convert(int p);

int d[400][11];

char c[1001][3001],f[1001][3001],cp[100];
int main()
{
    strcpy(f[0],"1\0");

    int i,j,k,n,lta,ltb,carry,m,max,sum,lp,p,g;
    char a[3001],b[3001],temp;

    for(p=1;p<=1000;p++)
    {
        convert(p);

        strcpy(a,f[p-1]);
        strcpy(b,cp);

        //printf("no.\n");
        //printf("p=");
        //puts(cp);
        //printf("f[%d]=",p-1);
        //puts(f[p-1]);

        lta=strlen(a);
        ltb=strlen(b);

        for(i=0;i<lta/2;i++)        // reversing 1st(a) string
        {
            temp=a[i];
            a[i]=a[lta-i-1];
            a[lta-i-1]=temp;
        }
        for(i=0;i<ltb/2;i++)        //reversing 2nd(b) string
        {
            temp=b[i];
            b[i]=b[ltb-i-1];
            b[ltb-i-1]=temp;
        }
        //puts(a);
        //puts(b);
        for(i=0;i<ltb;i++)
            for(j=0;j<i;j++)
            c[i][j]='0';    // assigning '0' to the first insted 'x'

        max=0;
        for(i=0;i<ltb;i++)      // multiplying 'a' with single element of 'b'
        {
                k=i;
                carry=0;
            for(j=0;j<lta;j++)
            {
                m=(b[i]-'0')*(a[j]-'0')+carry;
                carry=m/10;
                m=m%10;
                c[i][k]=m+'0';
                //printf("i=%d j=%d a[j]=%c b[i]=%c c[i][k]=%c m=%d\n",i,j,a[j],b[i],c[i][k],m);
                ++k;
            }
            if(carry>9)
            {
                c[i][k]=carry/10+'0';
                carry=carry%10;

                c[i][++k]=carry+'0';
                c[i][++k]='\0';

            }
            else if(carry>0)
            {
                c[i][k]=carry+'0';
                c[i][++k]='\0';
            }
            else
                c[i][k]='\0';

            if(k>max)
            max=k;
        }

         carry=0;
         for(i=0;i<max;i++)     //summing the arrys
         {
             sum=0;
            for(j=0;j<ltb;j++)
            {
                if(c[j][i]==0)
                    c[j][i]='0';

                sum+=c[j][i]-'0';
            }

            sum=sum+carry;
            carry=sum/10;
            sum=sum%10;
            f[p][i]=sum+'0';

            ++d[p][sum];
         }
        if(carry>9)
            {
                f[p][i]=carry/10+'0';
                g=carry/10;
                ++d[p][g];
                carry=carry%10;
                ++d[p][carry];
                f[p][i+1]=carry+'0';
                f[p][i+2]='\0';
            }
            else if(carry>0)
            {
                ++d[p][carry];
                f[p][i]=carry+'0';
                f[p][i+1]='\0';
            }
            else
                f[p][i]='\0';     //summing the arrys

            //puts(f[p]);
            max=strlen(f[p]);

         for(i=0;i<max/2;i++)       //reversing d
         {
             temp=f[p][i];
             f[p][i]=f[p][max-i-1];
             f[p][max-i-1]=temp;
         }

    }

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        printf("%d! --\n   ",n);

        for(i=0;i<4;i++)
            {
                if(d[n][i]>100)
                    printf("(%d)   %d    ",i,d[n][i]);
                else if(d[n][i]<10)
                    printf("(%d)     %d    ",i,d[n][i]);
                else
                    printf("(%d)    %d    ",i,d[n][i]);
            }

        if(d[n][4]>100)
                printf("(%d)  %d\n   ",i,d[n][4]);
        else if(d[n][4]<10)
                printf("(%d)    %d\n   ",i,d[n][4]);
        else
            printf("(%d)   %d\n   ",i,d[n][4]);

        for(i=5;i<9;i++)
            {
                if(d[n][i]>100)
                    printf("(%d)  %d    ",i,d[n][i]);
                else if(d[n][i]<10)
                    printf("(%d)     %d    ",i,d[n][i]);
                else
                    printf("(%d)    %d    ",i,d[n][i]);
            }
        if(d[n][9]>100)
            printf("(%d)  %d\n",i,d[n][9]);
        else if(d[n][9]<10)
            printf("(%d)    %d\n",i,d[n][9]);
        else
            printf("(%d)   %d\n",i,d[n][9]);
    }

    return 0;
}
void convert(int p)
{
    int i,lt;
    char temp;
    i=-1;
    while(p>0)
    {
        cp[++i]=p%10+'0';
        p=p/10;
    }
    lt=strlen(cp);
        cp[lt]='\0';
        for(i=0;i<lt/2;i++)        // reversing cp
        {
            temp=cp[i];
            cp[i]=cp[lt-i-1];
            cp[lt-i-1]=temp;
        }
    cp[lt]='\0';
}
