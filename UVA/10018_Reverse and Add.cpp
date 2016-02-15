#include<stdio.h>
#include<string.h>

int palindrom(char a[],int l);

int main()
{
    char a[1000],b[1000],temp;
    int i,j,l,n,sum,carry,tag,count;

    scanf("%d ",&n);
    for(j=0;j<n;j++)
    {
        gets(a);
        count=0;
        while(1)
        {
            l=strlen(a);
            a[l]='\0';

            tag=palindrom(a,l);
            if(tag==1)
                break;

            carry=0;
            for(i=0;i<l;i++)
                {
                    sum=a[i]+a[l-i-1]-'0'-'0'+carry;
                    carry=sum/10;
                    sum=sum%10;
                    b[i]=sum+'0';
                }
                if(carry!=0)
                {
                    b[i]=carry+'0';
                    b[l+1]='\0';
                }
                else
                b[l]='\0';

                l=strlen(b);

                for(i=0;i<l;i++)
                    a[i]=b[i];

                a[l]='\0';

            ++count;
        }
        printf("%d %s\n",count,a);
    }
    return 0;
}
int palindrom(char a[],int l)
{
    int i,pal;

    pal=1;
    for(i=0;i<l/2;i++)
        if(a[i]!=a[l-i-1])
            {
                pal=0;
                break;
            }
    return pal;
}


