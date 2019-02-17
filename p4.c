#include <stdio.h>

int main()
{
  char a[100];
  int i,l;
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++);
  l=i;
  a[l]='.';
 for(i=0;a[i]!='\0';i++)
 {
     printf("%c",a[i]);
 }
    return 0;
}
