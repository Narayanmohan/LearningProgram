/*program No- p65.c
dt-8-8-2021
Concept: Looping
Next Program:Read and Display number other then 1000, is the number positive , negative or zero.
-----------------------------------------------------------------------------------------------
Analysis:
  Input - a
  output- Displaynubmerotherthan1000 & ponegorzero
  
  
Logic:
     input a
     loop : while
     
        (a!=1000)
        T-> check a>=0
        T-> Print Positive Number
        F -> Check a<0
        T-> Print Negative Number
        F-> Print zero
        
        Input a
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    int a;
    scanf("%d",&a);
    
    while(a!=1000)
    {
    
      if(a>0)
      
      printf("Positive Number = %d",a);
      
      else if(a<0)
      
      printf("Negative Number = %d",a);
      
      else

      printf("Entered no is zero = %d",a);
      
      scanf("%d",&a);
     
        
    
    }
    
  


}        
            






