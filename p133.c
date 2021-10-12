/*Program No- p133.c
dt-9-30-2021
Concept- For Loop
Next Program-Print the Numbers from 1 to 1000 and find the number is even or not 
--------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j;
i=1;
j=1000;

    for(i=1;i<=j;i++)
    {

        if((i%2)==0)
        {
        
            printf("\n The Number is Even = %d",i);
            
        }
        else
        {
            
           printf("\n The Number is not a Even Number =%d",i);
        
        } 
    }

}
