#include <stdio.h>

int main()
{
    char a[50],t;
    int i,j,l;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    l=i;
    if(l%2==0)
    {
         for(i=0;i<l-1;i=i+2)
         {
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
    }
    }
    else
    {
     for(i=0;i<l-2;i=i+2)
     {
          t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
     }
    }
     for(i=0;a[i]!='\0';i++)
     {
         printf("%c",a[i]);
     }
    return 0;
}
