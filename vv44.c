#include<stdio.h>
void main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if((a>1)&&(a<10))
    {
        printf("in range%d",a);
    }
    else
    {
        printf("not in range");
    }
}
