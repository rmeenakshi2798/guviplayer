#include <stdio.h>

int main()
{
  char a[100],p;
  int i,c=0,j,max=0;;
  scanf("%[^\n]",a);
  for(i=0;a[i]!='\0';i++)
  {
      if(a[i]!='$')
      {
      c=0;
      for(j=i+1;a[j]!='\0';j++)
      {
          if(a[i]==a[j])
          {
              c++;
              a[j]='$';
              
          }
      }
  }
  if(c>max)
  {
      max=c;
      p=a[i];
  }
  }
  printf("%c",p);

    return 0;
}
