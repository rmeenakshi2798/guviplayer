#include <string.h>

int main()
{
   char a[100];
   int i,j,p;
  gets(a);
   for(i=0;a[i]!='\0';i++)
   {
         for(j=i+1;a[j]!='\0';j++)
 {
     if(a[i]==a[j])
     {
         p=i;
         a[j]='$';
     }
 }
 a[p]='$';
       
   }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='$')
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}
