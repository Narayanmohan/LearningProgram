/* Program No  P18.c
Concept-IF CONTROL STRUCTURE
dt-4-15-2021
The given integer number is positive, Negative or zero
--------------------------------------------------------------------------*/

#include<stdio.h>
int main()
{

    int num;
    scanf("%d",&num);
    
        if(num >=1)
            printf("Given number is positive number = %d ", num);
            
        else if (num < 0)
            printf("Given number is Negative number = %d ",num);
            
        else
           printf("Given number is zero = %d ",num);
             


}