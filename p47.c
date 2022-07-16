/*program No - p47.c
dt -4-18-2021
Next Program: Given character is upper, lower, digit or special character 
---------------------------------------------------------------------
Analysis:
Input: cha;
output: uplowdigspc
Logic:
    check
        cha>=65 && cha<=90
        T : upper
        F: check 
            cha>=97 && cha <=122
        T: Lower
        F: check
            cha>=48 && cha <=57
        T:digit
        F: Special characters
-------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    char cha;
    
    scanf("%c",&cha);
    
        if(cha>=65 && cha<= 90)
            
            printf("Given character is upper = %c ",cha);
            
        else if(cha >=97 && cha <= 122)
            
            printf(" Given charcter is lower = %c ",cha);
            
        else if(cha>=48 && cha <= 57)
            
            printf("Given character is digit = %c ", cha);
        
        else
            
            printf("Given character is special = %c ",cha); 
                   


}        