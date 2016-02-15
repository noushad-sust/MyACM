#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,carry,sum,lt;
    char a[101][101],b[101],c[101],d,s[1000],temp;

    for(i=0;;i++)
    {
        gets(a[i]);
        if(strlen(a[i])==1 && a[i][0]=='0')
        break;
    }
    n=i;

    lt=strlen(a[0]);
    for(j=0;j<n;j++)
    {
        for(i=0;i<=lt/2;i++)
        {
            temp=a[j][i];
            a[j][i]=a[j][lt-i-1];
            a[j][lt-i-1]=temp;
        }
    }

    carry=0;
    for(i=0;i<lt;i++)
    {
        sum=carry;
        for(j=0;j<n;j++)
        sum+=a[j][i]-'0';

        carry=sum/10;
        sum=sum%10;
        s[i]=sum+'0';
    }

    if(carry>99)
    {
        {
            s[i]=carry%10+'0';
            carry=carry/10;


            s[i+1]=carry%10+'0';
            carry=carry/10;

            s[i+2]=carry+'0';
            s[i+3]='\0';
        }
    }
    else if(carry>9)
    {
            s[i]=carry%10+'0';
            carry=carry/10;

            s[i+1]=carry+'0';
            s[i+2]='\0';
    }
    else
    {
        if(carry!=0)
        {
            s[i]=carry+'0';
            s[i+1]='\0';
        }
        else
        s[i]='\0';
    }

    lt=strlen(s);
    for(i=0;i<=lt/2;i++)
    {
        temp=s[i];
        s[i]=s[lt-i-1];
        s[lt-i-1]=temp;
    }

    puts(s);

    return 0;
}
