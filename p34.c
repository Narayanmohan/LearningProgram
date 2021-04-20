/*program p34.c
dt-4-18-2021
Concept: Implicit if with ! NOT Operator
Given integer number is even or not 
---------------------------------------
Analysis:
        
        Input:  num , a;
        
        Output : EvenorNot
        
             Logic: a = num % 2 
        
                     check :!a
                     
                     T = Even Number
                     F = Odd Number
                     
--------------------------------------*/

#include<stdio.h>
int main()
{

 int a, num;
 scanf("%d",&num);
         
             a =(num%2);
             
                 if(!a)
                 
                     printf("Entered number is Even Number= %d",a);
                     
                 else
                 
                     printf("Entered number is odd Number = %d" ,a);




}                     
                     
                             