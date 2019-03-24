#include <stdio.h>
#include <string.h>

int main()
{
   char a[100],b[100];
   int i,j=0;
  gets(a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]!=' ')
       {
          b[j]=a[i];
          j++;
       }
       
   }
   b[j]='\0';
   printf("%s",b);
    return 0;
}
