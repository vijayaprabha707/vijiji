#include<stdio.h>
void main()
{
int i;
char ch[60];
printf("enter the string");
scanf("%s",&ch);
for(i=0;ch[i]!=0;i++)
{
if((ch[i]=='a')||(ch[i]=='e')||(ch[i]=='i')||(ch[i]=='o')||(ch[i]=='u'))
{
printf("vowel");
}
else
{
printf("not a vowel");
}
}
