#include <stdio.h>

int main()
{
    char a[50],b[50];
    int i,k,j,p=0,q=0,g=0,c=0,c1=0;
    scanf("%s%s",a,b);
   /* for(i=0;a[i]!='\0';i++);
    c=i;
    for(i=0;b[i]!='\0';i++);
    c1=i;
    if(c==c1)
    {*/
    for(i=0;a[i]!='\0';i++);
    c=i;
        for(i=0;a[i]!='\0';i++)
        {
            for(j=i+1;a[j]!='\0';j++)
            {
                if(a[i]==a[j])
                {
                    p++;
                }
            }
            for(k=i+1;b[k]!='\0';k++)
            {
                if(b[i]==b[k])
                {
                    q++;
                }
            }
            if(p==q)
            {
                g++;
            }
        
        }
    if(c==g)
    {
        printf("yes");
    }

    else
    {
        printf("no");
    }

    return 0;
}
