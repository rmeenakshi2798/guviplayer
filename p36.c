#include <stdio.h>

int main()
{
  int n,k,c=0,r;
  scanf("%d%d",&n,&k);
  while(n)
  {
   r=n%10;
   if(k==r)
   {
       c++;
   }
   n=n/10;
  }
  printf("%d",c);

    return 0;
}
