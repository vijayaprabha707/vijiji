#include<stdio.h>
void main()
{
    int n1,n2,n3,n4,hour,minutes;
    printf("enter the time");
    scanf(" %d %d",&n1,&n2);
    printf("first time in hr:min",n1,n2);
    scanf("%d %d",&n3,&n4);
    printf(" first time in hr:min",n3,n4);
    hour=n1-n3;
    minutes=n2-n4;
    printf("the hr:min is %d %d",hour,minutes);
}
