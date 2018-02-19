#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    printf("the number is %d",n);
    if(n%2==0)
    {
        printf("the even number %d ",n);
    }
      else
      {
          printf("the is nearest  even number is %d",n-1);
      }

}
