/*program No-p196.c
dt-11-11-20213
Concept- Do-While
Loop- Do- While
Next Program-Find the year is leap year or not between two given limits
----------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
int i,firstlimit,secondlimit;

scanf("%d",&firstlimit);
scanf("%d",&secondlimit);


i=firstlimit;

do
{
    if((i%4)==0)
    {
    
        printf("\n Leap year = %d",i); 
        
    }
    else
    {
        
        printf("\n Not a Lear Year = %d",i);
    
    }
    
i++;

}

while(i<=secondlimit);


}