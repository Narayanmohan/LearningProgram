/*program No - p33.c
dt -4-17-2021
Given integer is zero or NOT

Concept: Implicit if check with ! (this operator will Negates the result)

Note: If we put ! operator in the condition of previous 3 problems 
True becomes False and False becomes True, that negates the result
----------------------------------------------------------------------------

Analysis:

     Input a
     
     output Zeroornot
     
     Logic
     
             check !a
                 T = zero
                 F = Notazero
----------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    int a;

     scanf("%d",&a);
    
        if(!a)
        
            printf("Given number is zero =%d",a);
            
        else
        
            printf("Given number is NoTZERO = %d", a);




}                 
     
     

