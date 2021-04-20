/* Program No - p40.c
dt 4-18-2021
Concept: Nested Ternary Expression
Program Name: Biggest of 3 Number using Nested Ternary Expression 
--------------------------------------------------------------------
Analysis:
         input : a, b,c
         output: Biggest3
         Logic :
                 Biggest3 = a>b?(a>c?a:c):b>c?b:c
                 
        Print Biggest3
        
-------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    int a, b, c, Biggest3;
    
    scanf("%d%d%d", &a,&b,&c);
    
    Biggest3 = a>b?(a>c?a:c):b>c?b:c;
    
    printf("Biggest of 3 is  = %d ", Biggest3);
    




}        
                 