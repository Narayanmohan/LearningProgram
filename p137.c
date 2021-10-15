/*program No- p137.c
dt-10-15-2021
Concept- For Loop
Next Program-Print the years between the two limits and find the year is leap year or NOT
-------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i, firstlimit, secondlimit;

scanf("%d",&firstlimit);
scanf("%d",&secondlimit);

for(i=firstlimit;i<=secondlimit;i++)
{

    if((i%4)==0)
    {
     
     printf("\n Leap year = %d",i);
    
    }
    
    else
    {
    
    printf("\n Not a leap year = %d",i);
    
    }

}





}