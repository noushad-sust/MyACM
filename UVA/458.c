#include<stdio.h>
#include<string.h>

int main()
{
     int i,n;
     char a[10000];

     while(gets(a))
    {
           for(i=0;i<strlen(a);i++)
       {
           printf("%c",a[i]-7);

       }
       printf("\n");
   }
    return 0;
}
