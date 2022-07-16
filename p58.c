/*program No - p58.c
dt-4-18-2021
Concept- Looping While
Next Program Name: Print the Number 1000 to 1
---------------------------------------------------------
Analysis:
  Input : NIL 
  output: Print 1000-1
  Logic:
      Loop
         initiallize c = 1000;
         Condition c >= 1
         Body: Print c
         Modify:  c = c-1
--------------------------------------------------------*/         
#include<stdio.h>
int main()
{

    int c;
    
    c = 1000;
    
    while(c >=1)
    {
    
        printf("\n Print the Number 1000 -1 = %d ",c);
      
        c = c - 1;
     
    
    }


}
  