/* Program No - p25.c
dt- 4-15-2021
IF CONTROL STRUTURE
GIVEN INTEGER NO IS SINGLE DIGIT OR NOT */


#include<stdio.h>
int main()
{

    int num;
        

    scanf("%d",&num);
    
        if(( num >=0) && (num <=9))
        
            printf("Entered number is single digit = %d ",num);
            
        else
        
            printf("Entered number is NOT a single digit = %d ",num);



}