/*Program Number-p60.c
dt-4-18-2021
Concept: Looping while
program Name: Print the years from 1000 to 3000 and say it is leap year or NOT
-------------------------------------------------------------------------------

Analysis:

        input: NIL
        output : Printyears&LeapyearorNOT
        Logic:
             Loop
                     Initialize c = 1000;
                     Condition c <= 3000;
                     
            check c%4 = = 0
            
            T = Print c is leap year;
            F = print c is NOT a Leap year;
-------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    int c;
    c = 1000;
    
    while(c <= 3000)
        {
        
            if(c%4==0)
            
                printf("\n Print the year is Leap year = %d ", c);
                
            else
            
                printf("\n Print the year is NOT a Leap year = %d", c);
                        
                
        c = c+1;  
        
        
        
        
        
        
        }



}            
                     