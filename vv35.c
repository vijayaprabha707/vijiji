#include<stdio.h>
#include<string.h>
void main()
{     int inc=0;
    char s[25];
    int i;
    scanf("%s",&s);
    printf("the string is %s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&& s[i]<='9')
        {
            inc++;
        }

    }
printf("%d",inc);
}
