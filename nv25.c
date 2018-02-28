#include<stdio.h>
void main()
{
    int c[10],i,a,mid,sum=0;
    printf("enter the limit");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<a;i++)
    {
        sum=sum+c[i];
    }
    mid=sum/a;
    printf("%d",mid);
}
