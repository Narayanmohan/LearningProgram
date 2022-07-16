/*program No - p46.c
dt- 4-18-2021
Next Program Name: Given character is digit or NOT

Note:
    ASCII value of 0-48,1-49,9-57
---------------------------------------------------
Analysis:

    input cha
    output: DigitorNOT
    Logic:
            check
                cha > =48 && cha <=57
                T = print digit
                F = print Not a digit
--------------------------------------------------*/
#include<stdio.h>
int main()
{

 char cha;

 scanf("%c",&cha);
 

     if(cha>=48 && cha <=57 )
          

              printf("Given character is digit = %c ",cha);

     else
     
              printf("Given character is NOT a digit = %c ",cha);           


}
                
    
