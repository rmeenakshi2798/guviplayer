#include <stdio.h>

int main()
{
char a[50];
int i,c=0,d=0,e=0,g;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
    if(a[i]=='I')
    {
        if(a[i+1]=='V')
        {
            c=4;
            i++;
            
        }
              else  if(a[i+1]=='X')
               {
                 c=9;
                i++;
                 
                 }
    else
        {
            c=c+1;
            
        }
    }
    else
    {
        if(a[i]=='V')
        {
            d=d+5;
        
        }
        if(a[i]=='X')
        {
            e=e+10;
            
        }
    }
}

g=c+d+e;
printf("%d",g);
    return 0;
}
