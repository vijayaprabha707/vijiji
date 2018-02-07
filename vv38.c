include <stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers");
    scanf("%d%d", &a,&b);
    printf("before swapping a and b values are%d%d",a,b);
    a ^=b;
    b ^=a;
    a ^=b;
    printf("after swapping a and b values are%d%d",a,b);
    return 0;
    }
