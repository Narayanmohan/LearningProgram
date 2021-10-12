/* program No p134.c
dt-10-11-2021
Concept- For Loop
Next Program - Find the Year is leap year or Not between 1000 to 2000
----------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

 int i,j;
 
 j=2000;
 
 for(i=1000; i<=j; i++)
 {
 
     if((i%4)==0)
     {
         printf("\n Leap Year = %d",i);
     }
     else
     {
         printf("\n Not a leap year = %d",i);
     
     }
      
     
 }


}
