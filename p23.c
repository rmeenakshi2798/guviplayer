#include <stdio.h>
int main(void) {

int a[50],b[50],i,n,k,j,max=0;
scanf("%d%d",&n,&k);

for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	scanf("%d",&b[i]);
}
for(i=0;i<k;i++)
{
	a[n]=b[i];
	n++;

	for(j=0;j<n;j++)
	{
		if(a[j]>max)
		{
			max=a[j];
		}
	}

	printf("%d ",max);
}
return 0;
}
