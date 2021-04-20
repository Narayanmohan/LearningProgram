/*PROGRAM NO - p31.c
dt-4-17-2021
IMPLICIT IF CONCEPT
Given integer number is even or not
-----------------------------------------
Analysis:
    input : num,a;
    output: Evenornot
    Logic:
         a=num%2
         
           check a
               F = Evennumber
               T = Oddnumber
-----------------------------------------*/
#include<stdio.h>
int main()
{

    int num, a;
    
    scanf("%d",&num);
        
            a=(num%2);
            
            if(a)
                
                printf("Given number is Odd Number = %d",a);
                
            else
            
                printf("Given number is Even Number =%d",a);
                
            



}

