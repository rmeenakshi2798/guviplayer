#include <stdio.h>

int main()
{
   int i,r,m,j,c=0,p=0;
   scanf("%d%d",&i,&r);
   for(m=i;m<=r;m++)
   {
       c=0;
       for(j=1;j<=m;j++)
       {
           if(m%j==0)
           {
           c++;
           }
       }
       if(c==2)
       {
           p++;
       }
   }
printf("%d",p);
    return 0;
}
