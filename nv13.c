#include<stdio.h>
void main()
{
int n,count=0,i;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n/2;i++)
{
if(n%2==0)
{
count++;
}
}
if(count==2)
{
printf("prime");
}
else
{
printf("not prime");
}
}
