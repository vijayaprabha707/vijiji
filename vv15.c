#include <stdio.h> 
int main()
{  
    int counter; 
    printf("Odd numbers between 1 to 10");  
    for(counter = 1; counter <= 10; counter++) 
    {  
  
        if(counter%2!=0) 
        { 
        
            printf("%d ", counter);  
        }  
    }  
   
    return 0;  
} 
