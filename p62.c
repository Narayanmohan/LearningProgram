/*Program No- p62.c
dt-4-18-2021
Concept: Looping while
Next Program Name: Print the numbers between two limits and say the number is even or odd
--------------------------------------------------------------------------------------------------
Analysis:

        Input: a,z
        output: Odd or Even between two numbers.
        Logic:
            Loop while
                 
                 condition a<z
            check a%2 = = 0;
            T: Print even number 
            F :Print odd number
        Modify a = a+1;
        
---------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    int a, b;
    
    scanf("%d%d",&a,&b);
    
    while(a<b)
        {
            if(a%2==0)
            
                printf("\n Even number between two limits = %d ",a);
                
            else
            
                printf("\n Odd number between two limits = %d ",a); 
                
    a = a+1;    
        
        
        
        
        }


}        