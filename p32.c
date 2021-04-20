/*program No-p32.c
dt-4-17-2021
IMPLICIT IF CONCEPT
Given year is leap year or NOT using implicit if condition
------------------------------------------------------------------
Analysis:
    y = year%4
    
      check y
              F: leap Year
              T: Not a Leap year.
              
------------------------------------------------------------------*/

#include<stdio.h>
int main()
{
    int year;
    int y;
    
    
    scanf("%d", &year);
    
     y = (year%4);
     
             if (y)
             
                 printf("Given year is NOT a leap year = %d",year);
                 
            else
            
                printf("Given year is leap year = %d",year);





}