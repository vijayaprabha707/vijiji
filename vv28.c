#include<stdio.h>
int main()
{
	int i,a[100],n;
	printf("enter the limit value");
	scanf("%d",&n);
	printf("enter tha array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d%d",a[i],i);
	}
	return 0;
}
