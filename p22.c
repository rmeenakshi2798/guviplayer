#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,a,i,gcd;
clrscr();
printf("enter number\n");
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
printf("%d",gcd);
getch();
}
