/* Program No- p30.c
dt - 4-17-2021
Given integer number is zero or NOT

if(a)-> Called Implicit check / or / Implicit if condition
Note- if the value of a is 0 then the condition is false 
and for any other value of 'a' it is taken as true 
----------------------------------------------------------
Analysis:
Input a;
Output ZeroorNot
Logic:
    check a
        T = Not a Zero
        F = Zero
        
--------------------------------------------------------*/
#include<stdio.h>
int main()
{

int a ;
scanf("%d",&a);
     
     if(a)
       
        printf(" Entered Number is NOT a zero = %d",a);
        
     else
        printf(" Entered Number is zero = %d" ,a);


}

