#include <stdio.h>

int main()
{
   char a[100];
   int i;
   
   scanf("%[^\n]",a);
   
for(i=1;a[i]!='\0';i++)
{
    if(i==0)
    {
        if(a[i]>=97&&a[i]<=123)
   {
       a[i]=a[i]-32;
   }
    }
    if(a[i]>=65&&a[i]<=91)
    {
        a[i]=a[i]+32;
    }
    if(a[i]==' ')
    {
         if(a[i+1]>=97&&a[i+1]<=123)
         {
             
        a[i+1]=a[i+1]-32;
        i++;
    }
    else
    {
        i++;
    }
    }
}
for(i=0;a[i]!='\0';i++)
{
    printf("%c",a[i]);
}
    return 0;
}
