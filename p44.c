/*Program No- p44.c
dt-4-18-2021
Program Name: Given character is Upper or NOT

Note:

Ascii value of A = 65 and Z = 90

-------------------------------------------------
Analysis:
    
        Input : cha
        Output: UpperorNot
        Logic:
        
                Cha > =65 && cha <=90
                
                T = Given character is upper
                F = Given character is Lower
------------------------------------------------*/
#include<stdio.h>
int main()
{
    char cha;
    scanf("%c",&cha);
      
       if (cha>=65 && cha <=90)
           printf(" Given character is Uppercase letter = %c ", cha);
       else
           printf(" Given character is lowercase letter = %c ",cha); 
           
}
                
        