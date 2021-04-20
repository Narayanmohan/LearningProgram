/*program No - p63.c
dt-4-18-2021
Concept: Looping while
Program Name: Print the years between two limits and say the year is leap year or NOT
----------------------------------------------------------------------------------------
Analysis:
    Input: a,b;
    output: Leap year or NOT between two limits
    Logic:
        Loop while
        Condition a<b;
            check:	a % 4 = = 0
            T = leap year
            F = Not a leap year
        Modify a= a+1;

--------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    int a,b;
    scanf("%d%d",&a,&b);
    
        while(a<b)
            {
                if(a%4==0)
                
                    printf("\n Leap year between two limits = %d ", a);
                    
                else
                            
                    printf("\n Not a Leap year between two limits = %d ",a);
            
            
                 a = a+1;   
                
            }




}                 
            