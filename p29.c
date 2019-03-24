#include <stdio.h>
#include <math.h>

int main()
{
   int m,i,n,t,q,p,c=0;
   
   
   scanf("%d%d",&m,&n);

 for(i=m+1;i<n;i++)
   
  {
     
      p=sqrt(i);
      q=p*p;
      if(q==i)
      {
          c++;
      }
  }
      printf("%d",c);
      
    return 0;
}
