#include <stdio.h>

int main()
{
   char a[100];
   int i,j,n;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++);
   n=i;
for(i=0;a[i]!='\0';i++)
{
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    {
        a[i]='$';
    }
}
for(i=n-1;i>=0;i--)
{
    if(a[i]!='$')
    {
        printf("%c",a[i]);
    }
}
    return 0;
}
