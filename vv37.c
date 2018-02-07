#include<stdio.h>
int main(int,int)
{
 int x,y;
 printf("enter the x and y values");
 scanf("%d%d",&x&y);
 printf("before swapping x and y values are",x,y);
 swap(x,y);
 printf("after swapping x and y values are",x,y);
 }
 void main(int x,int y)
 {
  int temp;
  temp=x;
  x=y;
  y=temp;
  printf("after swapping x and y values are",x,y);
}
