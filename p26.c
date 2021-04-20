/* Program No- p26.c
dt-4-15-2021
IF CONTROL STRUCTURE
GIVEN INTEGER NUMBER IS TWO DIGIT NUMBER OR NOT */

#include<stdio.h>
int main()
{

 int num;
 scanf("%d",&num);
 
     if((num>=10) && (num<=99))
         printf("Entered digit is Two digit = %d ", num);
         
     else
     
         printf("Entered digit is NOT a two digit = %d ",num);
         
 

}
