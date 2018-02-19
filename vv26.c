#include<stdio.h>
void main()
{
    int a[10],i,j,temp;
    int num;
    scanf("%d",&num);
    printf("enter the array");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf(" the sorted array is");
     for(i=0;i<num;i++)
    {
        printf("%d",a[i]);
    } 
    printf("%d",a[num/2]);
    
}
