#include<stdio.h>
void main()
{
int fib=0,s=1,n,i,temp;
printf("enter the limit");
scanf("%d",&n);
printf("FIBONACCI SERIES....");
printf("%d%d",fib,s);
for(i=2;i<=n;i++)
{
temp=fib+s;
fib=fib+s;
s=s+temp;
printf("%d",temp);
}
}
