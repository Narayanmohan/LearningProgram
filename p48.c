/* program No - p48.c
dt - 4-18-2021
Program Name- Convert upper case to Lower case

Note:
 The difference between the upper case and lower case letter is 32, so you add 32 to the upper case , will get teh corresponding lower case letters 
----------------------------------------------------------------------------------------------------------------------------------------------------
Analysis:

    Input: cha, Lc
    Output: UpperToLower
    Logic:
        check:(cha>=65 && cha >=90)
        
            Lc = cha+32;
            
            print UpperToLower
---------------------------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    char cha,lc;
    scanf("%c",&cha);
        
            if(cha >=65 && cha<=90)
                {
                
                    lc = cha + 32;
                     printf(" Given character converted to lowercase by adding +32 logic = %c ",lc);                   
                                      
                
                }
                
            else
            
                 printf(" Not able to convert to the lower case = %c ", lc);
               

}            
             
 
