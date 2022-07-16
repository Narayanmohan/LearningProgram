/*Program No- p72.c
dt-8-10-2021
Concept: Looping
Next Program:Classify the given character is single digit/Upper or special character until $ is given
------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    char cha;
    
    scanf("%c",&cha);
    
        while(cha!='$')
        {
        
            if(cha>=65 && cha<=90)
             
                  printf("%c is Upper case",cha);
            
            else if(cha>=97 && cha <=122)
                
                  printf("%c is Lower case",cha);
                  
            else if(cha>=48 && cha<=57)

                  printf("%c is Single digit",cha);
            
            else
                 printf("%c is special character",cha);
                 
            scanf("%c",&cha);              
        
        }



}

