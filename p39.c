/*program No - p39.c
dt-4-18-2021
CONCEPT- Ternary Expression
Next Program: Smallest of 3 Numbers using Ternary Expression
-------------------------------------------------------
Analysis:
     Input: a, b,c;
     output: s. small3;
     Logic:
         s =a<b?a:b;
         small3 = s<c?s:c
         print small3
-----------------------------------------------------*/
#include<stdio.h>
int main()
{
    int a, b, c, s,small3;
    
    scanf("%d%d%d", &a,&b,&c);
       
       s = a<b?a:b;
       
       small3 = s<c?s:c;
       
       printf("Smallest of three numbers is = %d ", small3);
       


}         
