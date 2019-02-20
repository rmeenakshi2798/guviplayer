#include <stdio.h>

int main()
{
   int n,a[40],k=0,c=0,i,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       {
           a[k]=i;
           k++;
       }
   }
   a[k]='\0';
   for(i=0;a[i]!='\0';i++)
   {
       c=0;
       for(j=1;j<=a[i];j++)
       {
           if(a[i]%j==0)
           {
               c++;
           }
       }
       if(c==2)
       {
           printf("%d ",a[i]);
       }
   }

    return 0;
}
