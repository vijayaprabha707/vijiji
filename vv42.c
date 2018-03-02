#include <stdio.h>
int main(void) 
{
	char a[100],b100];
	int i,j;
	printf("enter the string ");
	scanf("%s%s",&a,&b);
	i=strlen(a);
	j=strlen(b);
	if(i>=j)
	printf("%s",a);
	else
	printf("%s",b);
	return 0;
}
