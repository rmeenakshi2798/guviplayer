
#include <stdio.h>

int main()

{
  int n1,n2,g,l;
   int a,b,i,gcd;

scanf("%d%d",&n1,&n2);
 if(n1<n2)
{
a=n1;
}
else
{
a=n2;
}
for(i=1;i<=a;i++)
{
if((n1%i==0) && (n2%i==0))
{
gcd=i;
}
}
    
    l=(n1*n2)/gcd;
    
printf("%d",l);
return 0;
}
