#include<stdio.h>
#include<string.h>
#include<ctype.h>

void add(int count);
char a[5001][1050];
int main()
{
    int i,n;

    strcpy(a[0],"0");
    strcpy(a[1],"1");

    for(i=2;i<=5000;i++)
    {
        add(i);
        //puts(a[i]);
    }
    while(scanf("%d",&n)==1)
    {
        printf("The Fibonacci number for %d is ",n);
        puts(a[n]);
    }
    return 0;
}

void add(int count)
{
    int i,j,carry,sum,lt,ltt;
    char temp,c[1050],d[1050];

    strcpy(c,a[count-2]);
    strcpy(d,a[count-1]);

    lt=strlen(c);
        for(i=0;i<lt/2;i++)
        {
            temp=c[i];
            c[i]=c[lt-i-1];
            c[lt-i-1]=temp;
        }
    ltt=strlen(d);
        for(i=0;i<ltt/2;i++)
        {
            temp=d[i];
            d[i]=d[ltt-i-1];
            d[ltt-i-1]=temp;
        }

    if(lt<ltt)
        for(i=lt;i<ltt;i++)
            c[i]='0';
    carry=0;
    for(i=0;i<ltt;i++)
    {
        sum=c[i]+d[i]-'0'-'0'+carry;

        carry=sum/10;
        sum=sum%10;
        a[count][i]=sum+'0';
    }

    if(carry>9)
    {
            a[count][i]=carry%10+'0';
            carry=carry/10;

            a[count][i+1]=carry+'0';
            a[count][i+2]='\0';
            ltt=ltt+2;
    }
    else
    {
        if(carry!=0)
        {
            a[count][i]=carry+'0';
            a[count][i+1]='\0';
            ltt=ltt+1;
        }
        else
        a[count][i]='\0';
    }

    for(i=0;i<ltt/2;i++)
    {
        temp=a[count][i];
        a[count][i]=a[count][ltt-i-1];
        a[count][ltt-i-1]=temp;
    }
}
//
