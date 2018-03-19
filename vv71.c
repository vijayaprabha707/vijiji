#include<stdio.h>
void main()
{
    char a[50];
    printf("enter the string\n");
    scanf("%s",&a);
    if(a==strrev(a))
    {
        printf("palindrome");
    }
        else
        {
            printf("not palindrome");
        }
    }
return 0;
}
