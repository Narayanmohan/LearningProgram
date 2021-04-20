/*Program No - p37.c
dt 4-18-2021
Program:Smallest of Two number using Ternary expression
-------------------------------------------------------
Analysis:
    input a,b,c;
    output: SmallestofTwo
      check: c =a<b?a:b
         print c
--------------------------------------------------------*/
#include<stdio.h>
int main()
{
    int a , b, c;
    
    scanf("%d%d",&a,&b);
    
            c = a<b?a:b;
            
            printf("Smallest of Two number is = %d ", c);





}
         
