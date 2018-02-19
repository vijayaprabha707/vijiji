#include<stdio.h>
#include<string.h>
void main()
{
    char s[30],a[30];
    int k;
    printf("enter the string");
    scanf("%s",s);
    printf("the string is");
    scanf("%d",&k);
    int i;
    for(i=0;i<k;i++)
    {   a[i]=s[i];
    }
        printf("%s",a);
   }
