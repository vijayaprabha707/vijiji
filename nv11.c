#include <stdio.h>
void main()
{
    int pow=1,a,b,i;
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++)
    {
        pow=pow*b;
    }
    printf("%d",pow);
}
