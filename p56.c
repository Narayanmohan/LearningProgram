/*Program No -  p56.c
dt 4-18-2021
Program Name: Given Operator is an Arithmetic Operator or NOT
-------------------------------------------------------------------
Analysis:
   input ch;
   output ArithmeticorNOT
   Logic:
        case '+':
        case '-':
        case '*':
        -
        -
    Print("Arithmetic")
    default:
    print("Not a Arithmetic operators")
------------------------------------------------------------------*/

#include<stdio.h>
int main()
{

    char ch;
    scanf("%c",&ch);
    
    switch(ch)
    {
    
        case '+':
        case '-':
        case '*':
        case '/':
         
           printf(" Entered opeator is Arithmetic Operator = %c ",ch);
       break;
       
       default:
           printf(" Entered operator is NOT a Arithmetic Operator = %c ",ch);    
    
       
    
    
    }





}

