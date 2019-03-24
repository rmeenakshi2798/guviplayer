#include <stdio.h>

int main()
{
    char a[100];
    int i,d=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='(')
        {
            d++;
        }
        if(a[i]==')')
        {
            d--;
        }
    }
if(d==0)
{
    printf("yes");
}

else
{
    printf("no");
}
    return 0;
