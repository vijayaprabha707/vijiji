#include<stdio.h>
void main()
{
char s[20];
int count,i;
printf("enter the string");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
  if(s[i]==' ')
  {
count++;
  }
}
printf("number of words in a sentence is %d",count);
}

