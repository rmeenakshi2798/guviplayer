#include <stdio.h>
#include <string.h>

int main()
{
   char a[100],c[100];
   int i,j=0;
  gets(a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]!=' ')
       {
          c[j]=a[i];
          j++;
       }
       
   }
   b[j]='\0';
   printf("%s",c);
    return 0;
}
