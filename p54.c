/*Program No - p54.c
dt - 4-18-2021
Switch Statment
Next Program Name: Re-write the problem for both upper case and lower case
-----------------------------------------------------------------------------
Analysis:
        Input :cha
        output: lower/ upper
        logic:
             case 'A'...'Z':
                  print uppercase
              
             case 'a' ... 'z'
                  print lowercase
----------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);

        switch(ch)
        {
    
           case 'A'...'Z':
           
                printf(" Entered character is upper case = %c ", ch);
           
           break;
           
           case 'a'...'z':
           
               printf(" Entered character is lower case = %c ", ch );
           
           break;
           
           default:
               
              printf(" Not a valid character = %c ",ch);
           
    
    
    
        }











}                 