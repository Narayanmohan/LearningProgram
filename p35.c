/*program no -p35.c
dt 4-18-2021
Implicit if with ! Not operator ie..if(!a) 
NextProgam: Given year is leap year or not 
------------------------------------------
Analysis:
    Input : year
    Output : LeapyearorNot
     Logic: Y = year%4
         check :!y
             F: Not a leap year
             T: Leap year
----------------------------------------*/
#include<stdio.h>
int main()
{

    int year, y;
    
    scanf("%d",&year);
         y = (year%4);
         
           if(!y)
               printf(" Entered year is leap year = %d", y);
           else
               printf(" Entered year is NOT a leap yar = %d",y);
               

}             