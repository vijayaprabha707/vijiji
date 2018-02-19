#include<stdio.h>
void main()
{
     int f=0,s=1,i,last,n;
    scanf("%d",&last);
    printf("the given number is %d",last);
    printf("%d %d",f,s);
    for(i=2;i<=last;i++)
    {
        n=f+s;
        f=s;
        s=n;
    printf("%d",n);
    }
}
