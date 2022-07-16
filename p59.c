/*Program No- p59.c
dt-4-18-2021
Concept: Looping -while
Next Program Name: Print the numbers from 1 - 100 and say the number is even or NOT 

--------------------------------------------------------------------------------
Analysis:
    
    Input  : NIL
    output : Print1-100& Even or NOT
    Logic  :	
          
             While Loop :
                        Initialize = c=1
                        condition c <= 100
                        
                        check (c % 2 = = 0)
                        T : Print it is Even Number
                        F : Print it is Odd Number
                        
            Modify : C = C + 1;
---------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    int c;
    c = 1;
        while(c<=100)
            {
            
                if(c%2==0)
                    
                    printf("\n it is an Even Number = %d ",c);
                
                else
                
                    printf("\n it is NOT an Even Number = %d ",c);
                    
                    c = c + 1;
                   
                       
            
            }


}            
                        