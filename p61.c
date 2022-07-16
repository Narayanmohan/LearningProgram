/*Program No - p61.c
dt-4-18-2021
concept: Looping while
Next program Name: Print the Numbers between two limit
---------------------------------------------------------
Analysis:
    
        input a,b;
        output : Limitbetweentwonumbers
        
        Logic:
                Loop while
                
                Condition a<b;
                
                Print a;
                
        Modify a = a+1;
----------------------------------------------------------*/
#include<stdio.h>
int main()
{

    int a,b;
    scanf("%d%d",&a,&b);
    
    while(a<b)
        {
            printf("\n Print between two limits = %d ",a);        
            a = a + 1;
        
        
        }

}

        
                
                