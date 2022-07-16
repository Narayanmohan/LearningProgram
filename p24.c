/* Program No p24.c
dt 4-15-2021
Concept -IF CONTROL STRUCTURE
Next Program - Given year is leap Year or Not
----------------------------------------------------------------------------------*/

#include<stdio.h>
int main()
{
    int year;
    
    scanf("%d",&year);
    
        if((year%4) == 0)
            
            printf("Entered year is leap year = %d ", year);
            
            else
             
            printf("Entered year is NOT a leap Year = %d ", year);

}