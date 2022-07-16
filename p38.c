/* Program No - p38.c
dt- 4-18-2021
Next Program: Biggest of 3 Numbers using Ternary expression
------------------------------------------------------
Analysis:
        
            Input : a, b,c
            output : t, big3
               Logic:
                       T = a>b>a:b
                       big3 = t>c?t:c
                       
                       print big3

Note:
     1 - Find biggest of two & put the result in T
     2 - Check T with the 3rd Variable in the next ternary expression
     3 - Print the Result
     
------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    int a, b,c,t,Big3;
    
    scanf("%d%d%d",&a,&b,&c);
    
         t = a>b?a:b;

         Big3 = t>c?t:c;	
         
             printf("Biggest of Three Number is  = %d ", Big3);
    
}
                       