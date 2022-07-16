/* Program No  p27.c
dt- 4-15-2021
Concept -IF CONTROL STRUCTURE
Next Program-Given integer number is single digit, two digit,three digit or four digit
----------------------------------------------------------------------------------------------------*/

#include<stdio.h>
int main()
{

    int num;
    
    scanf("%d",&num);
    

        if((num>=0) && (num<=9))
            printf("Entered number is Single digit = %d",num);
            

        else if((num>=10) && (num<=99))
            printf("Entered number is Two digit = %d", num);
            

        else if((num>99) &&(num<=999))
            printf("Entered number is Three digit = %d",num);
            

        else if((num>999)&&(num<=9999))
            printf("Entered number is Four digit = %d",num);
            

        else
            printf(" Entered number is NOT a valid number = %d",num);



}