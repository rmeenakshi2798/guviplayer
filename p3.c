#include <stdio.h>

int main()
{
    int n,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
        
    }
    return 0;
}
