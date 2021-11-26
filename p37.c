/*program No- p37.c
dt - 4-18-2021
Concept: Ternary Expression
Program: Smallest of Two numbers
------------------------------------------
Analysis:
        input: a, b, c;
        output: smallestoftwo
        
             check: 	
             c = a<b?a:b
             print c
------------------------------------------*/
#include<stdio.h>
int main()
{

   int a, b,c ;
   
       scanf("%d%d",&a,&b);
       
               c = a<b?a:b;
               
                   printf("Smallest of Two Numbers = %d ", c);


}             