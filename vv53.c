#include<stdio.h>
void main()
{
int n=473;
int n1,sum=0;
while(n!=0)
{
n1=n%10;
sum=sum+n1;
n=n/10;
}
printf("%d",sum);
}
