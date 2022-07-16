/* Program no - p36.c
dt-4-18-2021
Next Program-Biggest of Two numbers using Ternary Expression
Concept: Ternary Expression

Notes:
 c =a>b?a:b;  -> it is called as ternary expression
 
How it works?
  Checks a and b
  if the condition is true the value of a is stored in C
  other wise b stored in c
  
 ---------------------------------------------------------------
 Analysis:
     input:  a, b,c;
     output: Biggestoftwo
       Logic:	
             check c=a>b?a:b;
             
note: if it is If condition then T or F coming into picture
here no need for T/F in the check ....             
---------------------------------------------------------------*/             
#include<stdio.h>
int main()
{

    int a,b,c;
    scanf("%d%d",&a,&b);
    
        c = a>b?a:b;
        
        printf("Biggest of Two Numbers = %d ", c);
        


}  
 
